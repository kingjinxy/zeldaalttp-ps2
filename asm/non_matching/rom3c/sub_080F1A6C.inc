	THUMB_FUNC_START sub_080F1A6C
sub_080F1A6C: @ 0x080F1A6C
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080F1AA8  @ =gRam
	ldr r0, _080F1AAC  @ =0x00001663
	add r1, r5, r0
	mov r2, #0
	mov r0, #9
	strb r0, [r1]
	ldr r1, _080F1AB0  @ =0x00001787
	add r0, r5, r1
	strb r2, [r0]
	bl sub_0812F9A8
	bl sub_08114600
	ldr r0, _080F1AB4  @ =0x00001752
	add r1, r5, r0
	mov r2, #0
	mov r0, #64
	strh r0, [r1]
	ldr r1, _080F1AB8  @ =0x00000FA2
	add r5, r5, r1
	add r4, r4, r5
	strb r2, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F1AA8:
	.4byte gRam
_080F1AAC:
	.4byte 0x00001663
_080F1AB0:
	.4byte 0x00001787
_080F1AB4:
	.4byte 0x00001752
_080F1AB8:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080F1A6C

