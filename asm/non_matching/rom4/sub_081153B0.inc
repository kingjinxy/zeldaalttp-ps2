	THUMB_FUNC_START sub_081153B0
sub_081153B0: @ 0x081153B0
	push {lr}
	ldr r1, _08115408  @ =gRam
	ldr r2, _0811540C  @ =gUnknown_0817E9EC
	ldr r3, _08115410  @ =0x00001669
	add r0, r1, r3
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r2, [r0]
	add r3, r3, #187
	add r0, r1, r3
	mov r3, #0
	strb r2, [r0]
	ldr r2, _08115414  @ =0x00001723
	add r0, r1, r2
	strb r3, [r0]
	ldr r3, _08115418  @ =0x00001664
	add r0, r1, r3
	ldrh r2, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r0, r1, r3
	strh r2, [r0]
	ldr r2, _0811541C  @ =0x00001666
	add r0, r1, r2
	ldrh r2, [r0]
	add r3, r3, #4
	add r0, r1, r3
	strh r2, [r0]
	mov r2, #2
	ldr r0, _08115420  @ =0x00001663
	add r1, r1, r0
	ldrb r0, [r1]
	sub r0, r0, #12
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bls _081153FC
	mov r2, #1
_081153FC:
	add r0, r2, #0
	bl sub_081155A4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08115408:
	.4byte gRam
_0811540C:
	.4byte gUnknown_0817E9EC
_08115410:
	.4byte 0x00001669
_08115414:
	.4byte 0x00001723
_08115418:
	.4byte 0x00001664
_0811541C:
	.4byte 0x00001666
_08115420:
	.4byte 0x00001663
	THUMB_FUNC_END sub_081153B0

