	THUMB_FUNC_START sub_0811F6F8
sub_0811F6F8: @ 0x0811F6F8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _0811F74C  @ =gRam
	ldr r2, _0811F750  @ =0x00000E15
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #57
	strb r2, [r1]
	ldr r2, _0811F754  @ =0x00001844
	add r1, r3, r2
	add r0, r0, r1
	mov r1, #7
	strb r1, [r0]
	mov r1, #15
	ldr r0, _0811F758  @ =0x00000FF2
	add r5, r3, r0
	ldr r2, _0811F75C  @ =0x00000FA2
	add r4, r3, r2
	mov r2, #0
	ldr r0, _0811F760  @ =0x00001783
	add r3, r3, r0
_0811F724:
	lsl r0, r1, #24
	asr r1, r0, #24
	add r0, r1, r5
	ldrb r0, [r0]
	cmp r0, #237
	bne _0811F736
	add r0, r1, r4
	strb r2, [r0]
	strb r2, [r3]
_0811F736:
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _0811F724
	bl sub_080A0528
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811F74C:
	.4byte gRam
_0811F750:
	.4byte 0x00000E15
_0811F754:
	.4byte 0x00001844
_0811F758:
	.4byte 0x00000FF2
_0811F75C:
	.4byte 0x00000FA2
_0811F760:
	.4byte 0x00001783
	THUMB_FUNC_END sub_0811F6F8

