	THUMB_FUNC_START sub_080803CC
sub_080803CC: @ 0x080803CC
	push {r4,lr}
	ldr r4, _080803E4  @ =gRam
	ldr r1, _080803E8  @ =0x00000968
	add r0, r4, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r0, #2
	bne _080803EC
	bl sub_0807F904
	b _08080420
	.byte 0x00
	.byte 0x00
_080803E4:
	.4byte gRam
_080803E8:
	.4byte 0x00000968
_080803EC:
	cmp r0, #8
	bne _0808041C
	bl sub_0807F904
	ldr r3, _08080414  @ =0x00000B08
	add r0, r4, r3
	ldrh r1, [r0]
	sub r1, r1, #1
	lsl r1, r1, #1
	ldr r2, _08080418  @ =0x000018D0
	add r0, r4, r2
	add r1, r1, r0
	ldrh r2, [r1]
	mov r3, #128
	lsl r3, r3, #6
	add r0, r3, #0
	orr r0, r0, r2
	strh r0, [r1]
	b _08080420
	.byte 0x00
	.byte 0x00
_08080414:
	.4byte 0x00000B08
_08080418:
	.4byte 0x000018D0
_0808041C:
	bl sub_0807F904
_08080420:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080803CC

	.byte 0x00
	.byte 0x00
