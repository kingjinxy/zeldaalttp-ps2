	THUMB_FUNC_START sub_0807D468
sub_0807D468: @ 0x0807D468
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r4, _0807D4B4  @ =gRam
	ldr r1, _0807D4B8  @ =0x000009AC
	add r0, r4, r1
	ldrb r0, [r0]
	add r5, r4, #0
	cmp r0, #26
	beq _0807D54C
	ldr r2, _0807D4BC  @ =0x00000B3E
	add r0, r4, r2
	ldrh r7, [r0]
	ldr r3, _0807D4C0  @ =0x000009F8
	add r0, r4, r3
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #7
	cmp r1, r0
	bne _0807D4C8
	lsl r3, r7, #1
	ldr r6, _0807D4C4  @ =0x00000C52
	add r1, r4, r6
	add r1, r3, r1
	mov r2, #151
	lsl r2, r2, #4
	add r0, r4, r2
	ldrh r2, [r0]
	mov r4, #128
	lsl r4, r4, #6
	add r0, r4, #0
	orr r0, r0, r2
	strh r0, [r1]
	add r2, r3, #0
	b _0807D4DA
	.byte 0x00
	.byte 0x00
_0807D4B4:
	.4byte gRam
_0807D4B8:
	.4byte 0x000009AC
_0807D4BC:
	.4byte 0x00000B3E
_0807D4C0:
	.4byte 0x000009F8
_0807D4C4:
	.4byte 0x00000C52
_0807D4C8:
	lsl r2, r7, #1
	ldr r6, _0807D504  @ =0x00000C52
	add r0, r4, r6
	add r0, r2, r0
	mov r3, #151
	lsl r3, r3, #4
	add r1, r4, r3
	ldrh r1, [r1]
	strh r1, [r0]
_0807D4DA:
	ldr r4, _0807D508  @ =0x00000AA8
	add r1, r5, r4
	ldr r0, _0807D50C  @ =gUnknown_081676F2
	add r0, r2, r0
	ldrh r1, [r1]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	bne _0807D514
	add r7, r7, #1
	ldr r6, _0807D510  @ =0x00000B3E
	add r0, r5, r6
	strh r7, [r0]
	mov r1, #180
	lsl r1, r1, #4
	add r0, r5, r1
	strh r7, [r0]
	bl sub_0807D3E4
	b _0807D618
	.byte 0x00
	.byte 0x00
_0807D504:
	.4byte 0x00000C52
_0807D508:
	.4byte 0x00000AA8
_0807D50C:
	.4byte gUnknown_081676F2
_0807D510:
	.4byte 0x00000B3E
_0807D514:
	ldr r3, _0807D544  @ =0x00000C52
	add r0, r5, r3
	add r0, r2, r0
	ldrh r3, [r0]
	mov r4, #151
	lsl r4, r4, #4
	add r1, r5, r4
	mov r2, #0
	strh r3, [r1]
	strh r2, [r0]
	add r7, r7, #1
	ldr r6, _0807D548  @ =0x00000B3E
	add r0, r5, r6
	strh r7, [r0]
	mov r1, #180
	lsl r1, r1, #4
	add r0, r5, r1
	strh r7, [r0]
	bl sub_0807D3E4
	bl sub_0807D2EC
	b _0807D618
	.byte 0x00
	.byte 0x00
_0807D544:
	.4byte 0x00000C52
_0807D548:
	.4byte 0x00000B3E
_0807D54C:
	ldr r2, _0807D628  @ =gUnknown_03002BA0
	ldrh r0, [r2]
	ldr r5, _0807D62C  @ =0x00003FFF
	add r3, r5, #0
	and r3, r3, r0
	mov r4, #63
	mov r12, r4
	mov r6, #64
	mov r10, r6
	add r2, r3, #0
	and r2, r2, r6
	lsl r2, r2, #5
	mov r7, #248
	lsl r7, r7, #4
	mov r9, r7
	add r1, r3, #0
	mov r0, r9
	and r1, r1, r0
	asr r1, r1, #1
	mov r4, #192
	lsl r4, r4, #6
	add r0, r4, #0
	mov r6, r12
	orr r0, r0, r6
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r7, r0, #1
	lsl r0, r7, #1
	ldr r7, _0807D630  @ =gUnknown_02018000
	mov r8, r7
	add r0, r0, r8
	ldr r1, _0807D634  @ =0x000070C6
	add r6, r1, #0
	strh r6, [r0]
	ldr r2, _0807D628  @ =gUnknown_03002BA0
	ldrh r0, [r2]
	add r1, r5, #0
	and r1, r1, r0
	add r1, r1, #128
	add r3, r1, #0
	mov r7, r10
	and r3, r3, r7
	lsl r3, r3, #5
	add r2, r1, #0
	mov r0, r9
	and r2, r2, r0
	asr r2, r2, #1
	add r0, r4, #0
	mov r7, r12
	orr r0, r0, r7
	and r0, r0, r1
	orr r0, r0, r3
	orr r0, r0, r2
	asr r7, r0, #1
	lsl r0, r7, #1
	add r0, r0, r8
	strh r6, [r0]
	ldr r1, _0807D628  @ =gUnknown_03002BA0
	ldrh r0, [r1]
	add r1, r5, #0
	and r1, r1, r0
	add r1, r1, #2
	add r3, r1, #0
	mov r2, r10
	and r3, r3, r2
	lsl r3, r3, #5
	add r2, r1, #0
	mov r7, r9
	and r2, r2, r7
	asr r2, r2, #1
	add r0, r4, #0
	mov r7, r12
	orr r0, r0, r7
	and r0, r0, r1
	orr r0, r0, r3
	orr r0, r0, r2
	asr r7, r0, #1
	lsl r0, r7, #1
	add r0, r0, r8
	strh r6, [r0]
	ldr r1, _0807D628  @ =gUnknown_03002BA0
	ldrh r0, [r1]
	and r5, r5, r0
	add r5, r5, #130
	add r1, r5, #0
	mov r2, r10
	and r1, r1, r2
	lsl r1, r1, #5
	add r0, r5, #0
	mov r3, r9
	and r0, r0, r3
	asr r0, r0, #1
	mov r7, r12
	orr r4, r4, r7
	and r4, r4, r5
	orr r4, r4, r1
	orr r4, r4, r0
	asr r7, r4, #1
	lsl r0, r7, #1
	add r0, r0, r8
	strh r6, [r0]
_0807D618:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807D628:
	.4byte gUnknown_03002BA0
_0807D62C:
	.4byte 0x00003FFF
_0807D630:
	.4byte gUnknown_02018000
_0807D634:
	.4byte 0x000070C6
	THUMB_FUNC_END sub_0807D468

