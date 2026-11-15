	THUMB_FUNC_START sub_080157F8
sub_080157F8: @ 0x080157F8
	push {r4,r5,lr}
	add r5, r0, #0
	lsl r1, r1, #24
	lsr r4, r1, #24
	lsl r2, r2, #16
	lsr r2, r2, #16
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r1, _0801581C  @ =0xFFFFFECF
	add r0, r2, r1
	cmp r0, #4
	bhi _08015882
	lsl r0, r0, #2
	ldr r1, _08015820  @ =0x08015824
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.byte 0x00
	.byte 0x00
_0801581C:
	.4byte 0xFFFFFECF
_08015820:
	.4byte 0x08015824
	.4byte _08015838
	.4byte _08015844
	.4byte _08015864
	.4byte _08015874
	.4byte _08015854
_08015838:
	add r0, r5, #0
	add r1, r3, #0
	add r2, r4, #0
	bl sub_08015888
	b _08015882
_08015844:
	cmp r4, #0
	bne _08015882
	add r0, r5, #0
	add r1, r3, #0
	mov r2, #0
	bl sub_08015888
	b _08015882
_08015854:
	cmp r4, #8
	bne _08015882
	add r0, r5, #0
	add r1, r3, #0
	mov r2, #8
	bl sub_08015888
	b _08015882
_08015864:
	cmp r4, #16
	bne _08015882
	add r0, r5, #0
	add r1, r3, #0
	mov r2, #16
	bl sub_08015888
	b _08015882
_08015874:
	cmp r4, #24
	bne _08015882
	add r0, r5, #0
	add r1, r3, #0
	mov r2, #24
	bl sub_08015888
_08015882:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080157F8

