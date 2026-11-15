	THUMB_FUNC_START sub_0810B154
sub_0810B154: @ 0x0810B154
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	lsl r0, r0, #24
	lsr r7, r0, #24
	add r0, r7, #0
	bl sub_080C5D18
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r7, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810B17E
	b _0810B40E
_0810B17E:
	ldr r1, _0810B198  @ =gRam
	ldr r2, _0810B19C  @ =0x00000CB2
	add r0, r1, r2
	ldrh r0, [r0]
	cmp r0, #0
	bne _0810B1A4
	ldr r3, _0810B1A0  @ =0x00001122
	add r0, r1, r3
	add r0, r7, r0
	ldrb r2, [r0]
	mov r1, #241
	and r1, r1, r2
	b _0810B1B0
_0810B198:
	.4byte gRam
_0810B19C:
	.4byte 0x00000CB2
_0810B1A0:
	.4byte 0x00001122
_0810B1A4:
	ldr r4, _0810B214  @ =0x00001122
	add r0, r1, r4
	add r0, r7, r0
	ldrb r2, [r0]
	mov r1, #14
	orr r1, r1, r2
_0810B1B0:
	strb r1, [r0]
	ldr r2, _0810B218  @ =gRam
	ldr r6, _0810B214  @ =0x00001122
	add r0, r2, r6
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r3, _0810B21C  @ =0x00000964
	add r0, r2, r3
	mov r3, #0
	strb r1, [r0]
	ldr r4, _0810B220  @ =0x00000F72
	add r0, r2, r4
	add r0, r7, r0
	ldrb r0, [r0]
	lsr r0, r0, #2
	mov r1, #3
	and r0, r0, r1
	ldr r6, _0810B224  @ =0x00000961
	add r1, r2, r6
	strb r0, [r1]
	ldr r1, _0810B228  @ =gUnknown_03003E74
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	mov r4, #4
	add r0, sp, #4
	strb r3, [r0]
	ldr r1, _0810B22C  @ =0x00000FB2
	add r0, r2, r1
	add r0, r7, r0
	ldrb r1, [r0]
	lsl r0, r1, #2
	add r0, r0, r1
	lsl r0, r0, #2
	ldr r1, _0810B230  @ =gUnknown_0817CAD0
	add r6, r0, r1
	add r2, sp, #4
	mov r9, r2
_0810B1FC:
	lsl r0, r4, #24
	mov r8, r0
	cmp r0, #0
	bne _0810B23C
	ldr r3, _0810B234  @ =gUnknown_03003818
	ldrb r2, [r3]
	ldr r4, _0810B238  @ =gUnknown_03003819
	ldrb r3, [r4]
	mov r0, #2
	mov r12, r0
	b _0810B260
	.byte 0x00
	.byte 0x00
_0810B214:
	.4byte 0x00001122
_0810B218:
	.4byte gRam
_0810B21C:
	.4byte 0x00000964
_0810B220:
	.4byte 0x00000F72
_0810B224:
	.4byte 0x00000961
_0810B228:
	.4byte gUnknown_03003E74
_0810B22C:
	.4byte 0x00000FB2
_0810B230:
	.4byte gUnknown_0817CAD0
_0810B234:
	.4byte gUnknown_03003818
_0810B238:
	.4byte gUnknown_03003819
_0810B23C:
	ldr r2, _0810B38C  @ =gRam
	ldr r3, _0810B390  @ =0x00000961
	add r1, r2, r3
	ldr r4, _0810B394  @ =gUnknown_03003818
	ldrb r0, [r4]
	ldrb r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #24
	lsl r1, r1, #24
	asr r1, r1, #25
	ldr r3, _0810B398  @ =gUnknown_03003819
	ldrb r0, [r3]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r3, r0, #24
	mov r4, #0
	mov r12, r4
_0810B260:
	ldr r0, _0810B39C  @ =gUnknown_03003E74
	mov r4, r9
	ldrb r1, [r4]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, #0
	ldrsb r1, [r6, r1]
	lsl r2, r2, #24
	asr r2, r2, #24
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r2, #1
	ldrsb r2, [r6, r2]
	lsl r3, r3, #24
	asr r3, r3, #24
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	str r2, [sp, #8]
	ldrb r3, [r6, #2]
	ldrb r5, [r6, #3]
	ldr r2, _0810B38C  @ =gRam
	ldr r4, _0810B3A0  @ =0x00000964
	add r2, r2, r4
	mov r10, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	orr r5, r5, r2
	lsl r5, r5, #8
	orr r3, r3, r5
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, r12
	str r4, [sp]
	ldr r2, [sp, #8]
	bl sub_080C6004
	mov r1, #255
	lsl r1, r1, #24
	add r1, r1, r8
	mov r2, r9
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	add r6, r6, #4
	lsr r4, r1, #24
	cmp r1, #0
	bge _0810B1FC
	add r0, r7, #0
	mov r1, #255
	mov r2, #4
	bl sub_080C5DA0
	ldr r5, _0810B38C  @ =gRam
	ldr r3, _0810B3A4  @ =0x000010F2
	add r0, r5, r3
	add r0, r7, r0
	mov r4, #161
	lsl r4, r4, #4
	add r1, r5, r4
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	beq _0810B2EA
	b _0810B40E
_0810B2EA:
	mov r1, #0
	ldr r6, _0810B3A8  @ =0x00000F82
	add r0, r5, r6
	add r0, r0, r7
	mov r9, r0
	strb r1, [r0]
	ldr r0, _0810B3AC  @ =0x00000FB2
	add r3, r5, r0
	add r3, r7, r3
	ldrb r0, [r3]
	lsl r0, r0, #28
	lsr r4, r0, #24
	ldr r2, _0810B3B0  @ =gUnknown_0817CAD0
	add r1, r4, r2
	sub r6, r6, #160
	add r0, r5, r6
	add r0, r7, r0
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrb r0, [r0]
	add r1, r1, r0
	add r6, r6, #32
	add r0, r5, r6
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r0, r10
	strb r1, [r0, #4]
	lsr r1, r1, #8
	strb r1, [r0, #16]
	add r2, r2, #1
	add r2, r4, r2
	ldr r1, _0810B3B4  @ =0x00000ED2
	add r0, r5, r1
	add r0, r0, r7
	mov r8, r0
	mov r1, #0
	ldrsb r1, [r2, r1]
	ldrb r2, [r0]
	add r1, r1, r2
	ldr r4, _0810B3B8  @ =0x00000EF2
	add r0, r5, r4
	add r6, r7, r0
	ldrb r0, [r6]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r0, r10
	strb r1, [r0, #5]
	lsr r1, r1, #8
	strb r1, [r0, #17]
	ldrb r0, [r3]
	lsl r0, r0, #25
	lsr r4, r0, #24
	ldr r1, _0810B3BC  @ =gUnknown_0817CB70
	add r0, r4, r1
	ldrb r0, [r0]
	mov r2, r10
	strb r0, [r2, #8]
	add r0, r4, #1
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2, #9]
	bl sub_080C44FC
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810B3C0
	add r0, r7, #0
	bl sub_080C500C
	lsl r0, r0, #24
	lsr r0, r0, #24
	neg r1, r0
	orr r1, r1, r0
	lsr r1, r1, #31
	b _0810B3F8
	.byte 0x00
	.byte 0x00
_0810B38C:
	.4byte gRam
_0810B390:
	.4byte 0x00000961
_0810B394:
	.4byte gUnknown_03003818
_0810B398:
	.4byte gUnknown_03003819
_0810B39C:
	.4byte gUnknown_03003E74
_0810B3A0:
	.4byte 0x00000964
_0810B3A4:
	.4byte 0x000010F2
_0810B3A8:
	.4byte 0x00000F82
_0810B3AC:
	.4byte 0x00000FB2
_0810B3B0:
	.4byte gUnknown_0817CAD0
_0810B3B4:
	.4byte 0x00000ED2
_0810B3B8:
	.4byte 0x00000EF2
_0810B3BC:
	.4byte gUnknown_0817CB70
_0810B3C0:
	mov r3, r8
	ldrb r5, [r3]
	ldrb r4, [r6]
	lsl r0, r4, #8
	add r0, r5, r0
	add r0, r0, #19
	strb r0, [r3]
	lsr r0, r0, #8
	strb r0, [r6]
	add r0, r7, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	strb r4, [r6]
	mov r4, r8
	strb r5, [r4]
	cmp r0, #0
	bne _0810B3F6
	ldr r0, _0810B420  @ =0x00000D71
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #4
	bne _0810B3F6
	mov r6, r9
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
_0810B3F6:
	mov r1, #1
_0810B3F8:
	cmp r1, #0
	beq _0810B40E
	bl sub_080AF16C
	ldr r0, _0810B424  @ =gRam
	ldr r1, _0810B428  @ =0x00001719
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	bl sub_0809945C
_0810B40E:
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810B420:
	.4byte 0x00000D71
_0810B424:
	.4byte gRam
_0810B428:
	.4byte 0x00001719
	THUMB_FUNC_END sub_0810B154

