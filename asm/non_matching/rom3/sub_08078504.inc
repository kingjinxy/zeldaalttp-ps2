	THUMB_FUNC_START sub_08078504
sub_08078504: @ 0x08078504
	push {r4-r6,lr}
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r2, r0, #2
	add r2, r2, r0
	lsl r2, r2, #2
	ldr r0, _08078614  @ =gUnknown_08150B18
	add r2, r2, r0
	ldr r4, _08078618  @ =gRam
	ldrh r1, [r2]
	ldr r3, _0807861C  @ =0x000009C6
	add r0, r4, r3
	mov r5, #0
	mov r3, #0
	strh r1, [r0]
	ldrh r1, [r2]
	mov r6, #171
	lsl r6, r6, #4
	add r0, r4, r6
	strh r1, [r0]
	ldrh r1, [r2, #4]
	ldr r6, _08078620  @ =0x00000958
	add r0, r4, r6
	strh r1, [r0]
	add r6, r6, #216
	add r0, r4, r6
	strh r1, [r0]
	sub r6, r6, #218
	add r0, r4, r6
	strh r1, [r0]
	add r6, r6, #8
	add r0, r4, r6
	strh r1, [r0]
	add r6, r6, #212
	add r0, r4, r6
	strh r1, [r0]
	ldrh r1, [r2, #2]
	sub r6, r6, #224
	add r0, r4, r6
	strh r1, [r0]
	add r6, r6, #218
	add r0, r4, r6
	strh r1, [r0]
	sub r6, r6, #220
	add r0, r4, r6
	strh r1, [r0]
	add r6, r6, #12
	add r0, r4, r6
	strh r1, [r0]
	add r6, r6, #210
	add r0, r4, r6
	strh r1, [r0]
	ldrh r1, [r2, #6]
	mov r6, #182
	lsl r6, r6, #5
	add r0, r4, r6
	strh r1, [r0]
	ldrh r1, [r2, #8]
	add r6, r6, #4
	add r0, r4, r6
	strh r1, [r0]
	ldrh r0, [r2, #10]
	ldr r6, _08078624  @ =0x00000B8C
	add r1, r4, r6
	strh r0, [r1]
	sub r0, r0, #2
	add r6, r6, #2
	add r1, r4, r6
	strh r0, [r1]
	ldrh r0, [r2, #12]
	add r6, r6, #2
	add r1, r4, r6
	strh r0, [r1]
	sub r0, r0, #2
	add r6, r6, #2
	add r1, r4, r6
	strh r0, [r1]
	ldrh r0, [r2, #14]
	add r6, r6, #14
	add r1, r4, r6
	strh r0, [r1]
	neg r0, r0
	add r6, r6, #2
	add r1, r4, r6
	strh r0, [r1]
	ldrh r0, [r2, #16]
	add r6, r6, #2
	add r1, r4, r6
	strh r0, [r1]
	neg r0, r0
	add r6, r6, #2
	add r1, r4, r6
	strh r0, [r1]
	ldrh r0, [r2, #18]
	mov r1, #156
	lsl r1, r1, #4
	add r2, r4, r1
	strh r0, [r2]
	ldr r6, _08078628  @ =0xFFFFFC00
	add r0, r0, r6
	mov r6, #248
	lsl r6, r6, #4
	add r1, r6, #0
	and r0, r0, r1
	ldr r6, _0807862C  @ =0x000009C4
	add r1, r4, r6
	lsr r0, r0, #7
	strh r0, [r1]
	ldrh r0, [r2]
	sub r0, r0, #16
	mov r1, #62
	and r0, r0, r1
	asr r0, r0, #1
	ldr r2, _08078630  @ =0x000009C2
	add r1, r4, r2
	strh r0, [r1]
	ldr r6, _08078634  @ =0x00000C08
	add r0, r4, r6
	strh r3, [r0]
	ldr r1, _08078638  @ =0x00000C0A
	add r0, r4, r1
	strh r3, [r0]
	bl sub_08076D10
	bl sub_080CBCD8
	bl sub_080CBCC8
	ldr r2, _0807863C  @ =0x0000172C
	add r4, r4, r2
	strb r5, [r4]
	bl sub_0807166C
	pop {r4-r6}
	pop {r0}
	bx r0
_08078614:
	.4byte gUnknown_08150B18
_08078618:
	.4byte gRam
_0807861C:
	.4byte 0x000009C6
_08078620:
	.4byte 0x00000958
_08078624:
	.4byte 0x00000B8C
_08078628:
	.4byte 0xFFFFFC00
_0807862C:
	.4byte 0x000009C4
_08078630:
	.4byte 0x000009C2
_08078634:
	.4byte 0x00000C08
_08078638:
	.4byte 0x00000C0A
_0807863C:
	.4byte 0x0000172C
	THUMB_FUNC_END sub_08078504

