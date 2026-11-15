	THUMB_FUNC_START sub_0812E0A0
sub_0812E0A0: @ 0x0812E0A0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r0, _0812E338  @ =gRam
	ldr r2, _0812E33C  @ =0x00000A04
	add r1, r0, r2
	ldrb r3, [r1]
	cmp r3, #0
	beq _0812E0BA
	sub r0, r3, #1
	strb r0, [r1]
_0812E0BA:
	ldr r1, _0812E340  @ =gUnknown_02000C00
	mov r0, #0
	strh r0, [r1]
	ldr r3, _0812E338  @ =gRam
	ldr r0, _0812E344  @ =0x00001643
	add r1, r3, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _0812E0E6
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #31
	bhi _0812E0E6
	ldr r2, _0812E348  @ =0x0000099A
	add r1, r3, r2
	ldrb r0, [r1]
	cmp r0, #0
	beq _0812E0E6
	sub r0, r0, #1
	strb r0, [r1]
_0812E0E6:
	mov r3, #0
	mov r12, r3
	mov r7, #0
	ldr r0, _0812E34C  @ =gUnknown_03002780
	mov r9, r0
	mov r1, #64
	mov r8, r1
	mov r6, #128
	lsl r6, r6, #2
_0812E0F8:
	ldr r2, _0812E350  @ =gUnknown_03002C3C
	mov r3, #0
	ldrsh r0, [r2, r3]
	mov r1, r12
	add r5, r1, r0
	cmp r5, #0
	bge _0812E108
	mov r5, #240
_0812E108:
	sub r0, r7, #3
	mov r4, #2
	cmp r0, #2
	bls _0812E112
	mov r4, #1
_0812E112:
	lsl r2, r7, #1
	mov r3, #128
	lsl r3, r3, #1
	add r2, r2, r3
	mov r0, r9
	add r3, r6, r0
	ldrh r1, [r3, #2]
	ldr r0, _0812E354  @ =0xFFFFFE00
	and r0, r0, r1
	mov r1, r8
	orr r0, r0, r1
	strh r0, [r3, #2]
	strb r5, [r3]
	ldr r1, _0812E358  @ =0x000003FF
	add r0, r1, #0
	and r2, r2, r0
	ldrh r1, [r3, #4]
	ldr r0, _0812E35C  @ =0xFFFFFC00
	and r0, r0, r1
	orr r0, r0, r2
	strh r0, [r3, #4]
	ldrb r0, [r3, #5]
	mov r1, #15
	and r1, r1, r0
	mov r2, #96
	mov r10, r2
	mov r0, r10
	orr r1, r1, r0
	ldrb r2, [r3, #3]
	mov r0, #17
	neg r0, r0
	and r0, r0, r2
	mov r2, #33
	neg r2, r2
	and r0, r0, r2
	mov r2, #63
	and r0, r0, r2
	mov r2, r8
	orr r0, r0, r2
	strb r0, [r3, #3]
	mov r0, #0
	strb r0, [r3, #1]
	lsl r0, r4, #2
	mov r2, #13
	neg r2, r2
	and r1, r1, r2
	orr r1, r1, r0
	strb r1, [r3, #5]
	mov r3, #16
	add r12, r12, r3
	add r6, r6, #8
	add r7, r7, #1
	cmp r7, #7
	ble _0812E0F8
	ldr r1, _0812E350  @ =gUnknown_03002C3C
	mov r2, #0
	ldrsh r0, [r1, r2]
	mov r3, r12
	add r1, r3, r0
	add r5, r0, #0
	add r5, r5, #24
	cmp r1, #0
	bge _0812E192
	mov r5, #240
_0812E192:
	add r2, r7, #0
	add r2, r2, #64
	add r4, r5, #0
	sub r4, r4, #8
	lsl r2, r2, #3
	add r2, r2, r9
	mov r3, #56
	ldrh r1, [r2, #2]
	ldr r0, _0812E354  @ =0xFFFFFE00
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2, #2]
	strb r4, [r2]
	mov r3, #222
	ldrh r1, [r2, #4]
	ldr r0, _0812E35C  @ =0xFFFFFC00
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2, #4]
	ldrb r0, [r2, #5]
	mov r1, #15
	and r1, r1, r0
	mov r0, r10
	orr r1, r1, r0
	ldrb r3, [r2, #3]
	mov r0, #17
	neg r0, r0
	and r0, r0, r3
	mov r3, #33
	neg r3, r3
	and r0, r0, r3
	mov r3, #63
	and r0, r0, r3
	strb r0, [r2, #3]
	mov r0, #13
	neg r0, r0
	mov r8, r0
	mov r0, #0
	strb r0, [r2, #1]
	mov r3, r8
	and r1, r1, r3
	mov r6, #8
	orr r1, r1, r6
	strb r1, [r2, #5]
	ldr r1, _0812E350  @ =gUnknown_03002C3C
	mov r2, #0
	ldrsh r0, [r1, r2]
	mov r3, r12
	add r1, r3, r0
	add r5, r0, #0
	add r5, r5, #24
	cmp r1, #0
	bge _0812E1FE
	mov r5, #240
_0812E1FE:
	add r2, r7, #0
	add r2, r2, #65
	mov r4, #136
	lsl r4, r4, #1
	lsl r2, r2, #3
	add r2, r2, r9
	mov r3, #48
	ldrh r1, [r2, #2]
	ldr r0, _0812E354  @ =0xFFFFFE00
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2, #2]
	strb r5, [r2]
	ldrh r1, [r2, #4]
	ldr r0, _0812E35C  @ =0xFFFFFC00
	and r0, r0, r1
	orr r0, r0, r4
	strh r0, [r2, #4]
	ldrb r0, [r2, #5]
	mov r1, #15
	and r1, r1, r0
	mov r0, r10
	orr r1, r1, r0
	ldrb r3, [r2, #3]
	mov r0, #17
	neg r0, r0
	and r0, r0, r3
	mov r3, #33
	neg r3, r3
	and r0, r0, r3
	mov r3, #63
	and r0, r0, r3
	mov r3, #64
	orr r0, r0, r3
	strb r0, [r2, #3]
	mov r0, #0
	strb r0, [r2, #1]
	mov r0, r8
	and r1, r1, r0
	orr r1, r1, r6
	strb r1, [r2, #5]
	ldr r1, _0812E350  @ =gUnknown_03002C3C
	mov r2, #0
	ldrsh r0, [r1, r2]
	mov r3, r12
	add r1, r3, r0
	add r5, r0, #0
	add r5, r5, #24
	cmp r1, #0
	bge _0812E264
	mov r5, #240
_0812E264:
	add r2, r7, #0
	add r2, r2, #66
	add r3, r5, #0
	sub r3, r3, #8
	lsl r2, r2, #3
	add r2, r2, r9
	mov r4, #80
	ldrh r1, [r2, #2]
	ldr r0, _0812E354  @ =0xFFFFFE00
	and r0, r0, r1
	orr r0, r0, r4
	strh r0, [r2, #2]
	strb r3, [r2]
	mov r3, #223
	ldrh r1, [r2, #4]
	ldr r0, _0812E35C  @ =0xFFFFFC00
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2, #4]
	ldrb r0, [r2, #5]
	mov r1, #15
	and r1, r1, r0
	mov r0, r10
	orr r1, r1, r0
	ldrb r3, [r2, #3]
	mov r0, #17
	neg r0, r0
	and r0, r0, r3
	mov r3, #33
	neg r3, r3
	and r0, r0, r3
	mov r3, #63
	and r0, r0, r3
	strb r0, [r2, #3]
	mov r0, #0
	strb r0, [r2, #1]
	mov r0, r8
	and r1, r1, r0
	orr r1, r1, r6
	strb r1, [r2, #5]
	ldr r1, _0812E350  @ =gUnknown_03002C3C
	mov r2, #0
	ldrsh r0, [r1, r2]
	mov r3, r12
	add r1, r3, r0
	add r5, r0, #0
	add r5, r5, #24
	cmp r1, #0
	bge _0812E2C8
	mov r5, #240
_0812E2C8:
	add r2, r7, #0
	add r2, r2, #67
	mov r3, #137
	lsl r3, r3, #1
	lsl r2, r2, #3
	add r2, r2, r9
	ldrh r1, [r2, #2]
	ldr r0, _0812E354  @ =0xFFFFFE00
	and r0, r0, r1
	orr r0, r0, r4
	strh r0, [r2, #2]
	strb r5, [r2]
	ldrh r1, [r2, #4]
	ldr r0, _0812E35C  @ =0xFFFFFC00
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2, #4]
	ldrb r0, [r2, #5]
	mov r1, #15
	and r1, r1, r0
	mov r0, r10
	orr r1, r1, r0
	ldrb r3, [r2, #3]
	mov r0, #17
	neg r0, r0
	and r0, r0, r3
	mov r3, #33
	neg r3, r3
	and r0, r0, r3
	mov r3, #63
	and r0, r0, r3
	mov r3, #64
	orr r0, r0, r3
	strb r0, [r2, #3]
	mov r0, #0
	strb r0, [r2, #1]
	mov r0, r8
	and r1, r1, r0
	orr r1, r1, r6
	strb r1, [r2, #5]
	ldr r2, _0812E350  @ =gUnknown_03002C3C
	mov r3, #0
	ldrsh r1, [r2, r3]
	cmp r1, #16
	beq _0812E3C0
	mov r0, #96
	neg r0, r0
	cmp r1, r0
	bne _0812E364
	ldr r0, _0812E338  @ =gRam
	ldr r2, _0812E360  @ =0x00000504
	add r1, r0, r2
	mov r0, #103
	bl sub_0812A324
	b _0812E3B4
_0812E338:
	.4byte gRam
_0812E33C:
	.4byte 0x00000A04
_0812E340:
	.4byte gUnknown_02000C00
_0812E344:
	.4byte 0x00001643
_0812E348:
	.4byte 0x0000099A
_0812E34C:
	.4byte gUnknown_03002780
_0812E350:
	.4byte gUnknown_03002C3C
_0812E354:
	.4byte 0xFFFFFE00
_0812E358:
	.4byte 0x000003FF
_0812E35C:
	.4byte 0xFFFFFC00
_0812E360:
	.4byte 0x00000504
_0812E364:
	cmp r1, #0
	bne _0812E3B4
	ldr r0, _0812E3E4  @ =0x000004BA
	add r0, r0, r9
	strb r1, [r0]
	ldr r1, _0812E3E8  @ =0x000010F3
	add r1, r1, r9
	mov r0, #40
	strb r0, [r1]
	mov r1, r9
	sub r1, r1, #50
	mov r0, #132
	strh r0, [r1]
	ldr r1, _0812E3EC  @ =0x0000044A
	add r1, r1, r9
	mov r0, #31
	strb r0, [r1]
	mov r2, r9
	sub r2, r2, #68
	ldrh r1, [r2]
	mov r3, #128
	lsl r3, r3, #3
	add r0, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r0, _0812E3F0  @ =gUnknown_02000840
	ldr r1, _0812E3F4  @ =gUnknown_02000C40
	mov r2, #96
	bl CpuSet
	ldr r1, _0812E3F8  @ =0x0000044B
	add r1, r1, r9
	mov r0, #1
	strb r0, [r1]
	ldr r0, _0812E3FC  @ =gRam
	ldr r2, _0812E400  @ =0x00000504
	add r1, r0, r2
	mov r0, #15
	bl sub_0812A324
_0812E3B4:
	ldr r2, _0812E3FC  @ =gRam
	ldr r3, _0812E404  @ =0x00000A0C
	add r1, r2, r3
	ldrh r0, [r1]
	add r0, r0, #16
	strh r0, [r1]
_0812E3C0:
	ldr r1, _0812E408  @ =gUnknown_0822B140
	ldr r2, _0812E3FC  @ =gRam
	ldr r3, _0812E40C  @ =0x00000A06
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812E3E4:
	.4byte 0x000004BA
_0812E3E8:
	.4byte 0x000010F3
_0812E3EC:
	.4byte 0x0000044A
_0812E3F0:
	.4byte gUnknown_02000840
_0812E3F4:
	.4byte gUnknown_02000C40
_0812E3F8:
	.4byte 0x0000044B
_0812E3FC:
	.4byte gRam
_0812E400:
	.4byte 0x00000504
_0812E404:
	.4byte 0x00000A0C
_0812E408:
	.4byte gUnknown_0822B140
_0812E40C:
	.4byte 0x00000A06
	THUMB_FUNC_END sub_0812E0A0

