	THUMB_FUNC_START sub_080764F8
sub_080764F8: @ 0x080764F8
	push {r4,lr}
	mov r1, #52
	mul r1, r0, r1
	ldr r0, _0807666C  @ =gUnknown_0814DB24
	add r3, r1, r0
	ldr r2, _08076670  @ =gRam
	ldrh r1, [r3]
	ldr r4, _08076674  @ =0x000009DA
	add r0, r2, r4
	strh r1, [r0]
	ldrh r1, [r3, #2]
	sub r4, r4, #20
	add r0, r2, r4
	strh r1, [r0]
	ldrh r1, [r3, #2]
	add r4, r4, #234
	add r0, r2, r4
	strh r1, [r0]
	ldrh r1, [r3, #4]
	add r4, r4, #196
	add r0, r2, r4
	strh r1, [r0]
	ldrh r1, [r3, #6]
	add r4, r4, #2
	add r0, r2, r4
	strh r1, [r0]
	ldrh r1, [r3, #8]
	add r4, r4, #2
	add r0, r2, r4
	strh r1, [r0]
	ldrh r1, [r3, #10]
	add r4, r4, #2
	add r0, r2, r4
	strh r1, [r0]
	ldrh r1, [r3, #12]
	add r4, r4, #10
	add r0, r2, r4
	strh r1, [r0]
	ldrh r1, [r3, #14]
	add r4, r4, #2
	add r0, r2, r4
	strh r1, [r0]
	ldrh r1, [r3, #16]
	add r4, r4, #2
	add r0, r2, r4
	strh r1, [r0]
	ldrh r1, [r3, #18]
	add r4, r4, #2
	add r0, r2, r4
	strh r1, [r0]
	ldrh r1, [r3, #22]
	ldr r4, _08076678  @ =0x00000958
	add r0, r2, r4
	strh r1, [r0]
	add r4, r4, #216
	add r0, r2, r4
	strh r1, [r0]
	sub r4, r4, #218
	add r0, r2, r4
	strh r1, [r0]
	add r4, r4, #8
	add r0, r2, r4
	strh r1, [r0]
	add r4, r4, #212
	add r0, r2, r4
	strh r1, [r0]
	ldrh r1, [r3, #20]
	sub r4, r4, #224
	add r0, r2, r4
	strh r1, [r0]
	add r4, r4, #218
	add r0, r2, r4
	strh r1, [r0]
	sub r4, r4, #220
	add r0, r2, r4
	strh r1, [r0]
	add r4, r4, #12
	add r0, r2, r4
	strh r1, [r0]
	add r4, r4, #210
	add r0, r2, r4
	strh r1, [r0]
	ldrh r1, [r3, #24]
	mov r4, #182
	lsl r4, r4, #5
	add r0, r2, r4
	strh r1, [r0]
	ldrh r1, [r3, #26]
	add r4, r4, #4
	add r0, r2, r4
	strh r1, [r0]
	ldrh r0, [r3, #28]
	ldr r4, _0807667C  @ =0x00000B8C
	add r1, r2, r4
	strh r0, [r1]
	sub r0, r0, #2
	add r4, r4, #2
	add r1, r2, r4
	strh r0, [r1]
	ldrh r0, [r3, #30]
	add r4, r4, #2
	add r1, r2, r4
	strh r0, [r1]
	sub r0, r0, #2
	add r4, r4, #2
	add r1, r2, r4
	strh r0, [r1]
	ldrh r0, [r3, #32]
	add r4, r4, #14
	add r1, r2, r4
	strh r0, [r1]
	neg r0, r0
	add r4, r4, #2
	add r1, r2, r4
	strh r0, [r1]
	ldrh r0, [r3, #34]
	add r4, r4, #2
	add r1, r2, r4
	strh r0, [r1]
	neg r0, r0
	add r4, r4, #2
	add r1, r2, r4
	strh r0, [r1]
	ldrh r1, [r3, #36]
	add r4, r4, #98
	add r0, r2, r4
	strh r1, [r0]
	ldrh r1, [r3, #38]
	add r4, r4, #2
	add r0, r2, r4
	strh r1, [r0]
	ldrh r1, [r3, #40]
	ldr r4, _08076680  @ =0x00000A1C
	add r0, r2, r4
	strh r1, [r0]
	add r0, r3, #0
	add r0, r0, #44
	ldrb r1, [r0]
	ldr r4, _08076684  @ =0x00000C98
	add r0, r2, r4
	strb r1, [r0]
	add r0, r3, #0
	add r0, r0, #45
	ldrb r1, [r0]
	add r4, r4, #1
	add r0, r2, r4
	strb r1, [r0]
	add r0, r3, #0
	add r0, r0, #46
	ldrb r1, [r0]
	add r4, r4, #1
	add r0, r2, r4
	strb r1, [r0]
	add r0, r3, #0
	add r0, r0, #47
	ldrb r1, [r0]
	add r4, r4, #1
	add r0, r2, r4
	strb r1, [r0]
	ldrh r0, [r3, #48]
	mov r1, #156
	lsl r1, r1, #4
	add r3, r2, r1
	strh r0, [r3]
	ldr r4, _08076688  @ =0xFFFFFC00
	add r0, r0, r4
	mov r4, #248
	lsl r4, r4, #4
	add r1, r4, #0
	and r0, r0, r1
	ldr r4, _0807668C  @ =0x000009C4
	add r1, r2, r4
	lsr r0, r0, #7
	strh r0, [r1]
	ldrh r0, [r3]
	sub r0, r0, #16
	mov r1, #62
	and r0, r0, r1
	asr r0, r0, #1
	ldr r1, _08076690  @ =0x000009C2
	add r2, r2, r1
	strh r0, [r2]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807666C:
	.4byte gUnknown_0814DB24
_08076670:
	.4byte gRam
_08076674:
	.4byte 0x000009DA
_08076678:
	.4byte 0x00000958
_0807667C:
	.4byte 0x00000B8C
_08076680:
	.4byte 0x00000A1C
_08076684:
	.4byte 0x00000C98
_08076688:
	.4byte 0xFFFFFC00
_0807668C:
	.4byte 0x000009C4
_08076690:
	.4byte 0x000009C2
	THUMB_FUNC_END sub_080764F8

