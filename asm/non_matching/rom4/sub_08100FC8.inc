	THUMB_FUNC_START sub_08100FC8
sub_08100FC8: @ 0x08100FC8
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _0810100C  @ =gRam
	ldr r2, _08101010  @ =0x00000F82
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	mov r2, #0
	add r5, r1, #0
	cmp r0, #10
	bgt _08100FE6
	cmp r0, #8
	blt _08100FE6
	mov r2, #1
_08100FE6:
	cmp r2, #0
	beq _08101020
	ldr r3, _08101014  @ =0x00000D94
	add r1, r5, r3
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #207
	and r0, r0, r2
	strb r0, [r1]
	ldr r0, _08101018  @ =0x0000096C
	add r1, r5, r0
	mov r0, #3
	strh r0, [r1]
	ldr r1, _0810101C  @ =gUnknown_0817B2D4
	add r0, r4, #0
	bl sub_080C94D0
	b _0810119A
	.byte 0x00
	.byte 0x00
_0810100C:
	.4byte gRam
_08101010:
	.4byte 0x00000F82
_08101014:
	.4byte 0x00000D94
_08101018:
	.4byte 0x0000096C
_0810101C:
	.4byte gUnknown_0817B2D4
_08101020:
	ldr r1, _08101048  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	ldrb r2, [r0]
	cmp r2, #14
	bls _08101054
	sub r2, r2, #15
	lsl r2, r2, #24
	lsr r2, r2, #24
	ldr r1, _0810104C  @ =gUnknown_0817B2EC
	lsl r0, r2, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldr r0, _08101050  @ =gUnknown_0817B308
	add r2, r2, r0
	ldrb r2, [r2]
	add r0, r4, #0
	bl sub_080C9480
	b _0810119A
_08101048:
	.4byte 0x00000F92
_0810104C:
	.4byte gUnknown_0817B2EC
_08101050:
	.4byte gUnknown_0817B308
_08101054:
	mov r6, #0
	ldrb r0, [r0]
	lsl r1, r0, #3
	sub r1, r1, r0
	lsl r1, r1, #3
	ldr r0, _08101098  @ =gUnknown_0817AE64
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #7
	bl sub_080C9480
	ldr r2, _0810109C  @ =0x00001042
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _081010AC
	ldr r3, _081010A0  @ =0x00000F82
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #6
	bne _081010A8
	ldr r0, _081010A4  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, #6
	lsl r0, r0, #3
	add r0, r0, r5
	mov r1, #170
	lsl r1, r1, #3
	add r0, r0, r1
	mov r1, #240
	strb r1, [r0]
	b _081010AE
_08101098:
	.4byte gUnknown_0817AE64
_0810109C:
	.4byte 0x00001042
_081010A0:
	.4byte 0x00000F82
_081010A4:
	.4byte gUnknown_03003E74
_081010A8:
	cmp r0, #4
	beq _081010AE
_081010AC:
	mov r6, #1
_081010AE:
	mov r2, #0
	ldr r0, _081010F4  @ =gRam
	ldr r3, _081010F8  @ =0x000009DA
	add r1, r0, r3
	ldrh r1, [r1]
	add r5, r0, #0
	cmp r1, #236
	bne _081010C0
	mov r2, #1
_081010C0:
	cmp r2, #0
	beq _08101128
	ldr r0, _081010FC  @ =gUnknown_02010990
	ldrb r0, [r0]
	cmp r0, #0
	beq _08101128
	ldr r1, _08101100  @ =0x00000F92
	add r0, r5, r1
	add r3, r4, r0
	ldrb r0, [r3]
	cmp r0, #9
	bhi _0810110C
	ldr r2, _08101104  @ =gUnknown_03003E74
	ldr r1, _08101108  @ =gUnknown_0817B30F
	add r0, r0, r1
	ldrb r0, [r0]
	lsr r0, r0, #2
	ldrh r2, [r2]
	add r0, r0, r2
	lsl r0, r0, #3
	add r0, r0, r5
	mov r2, #170
	lsl r2, r2, #3
	add r0, r0, r2
	b _0810111C
	.byte 0x00
	.byte 0x00
_081010F4:
	.4byte gRam
_081010F8:
	.4byte 0x000009DA
_081010FC:
	.4byte gUnknown_02010990
_08101100:
	.4byte 0x00000F92
_08101104:
	.4byte gUnknown_03003E74
_08101108:
	.4byte gUnknown_0817B30F
_0810110C:
	ldr r0, _08101124  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, #6
	lsl r0, r0, #3
	add r0, r0, r5
	mov r3, #170
	lsl r3, r3, #3
	add r0, r0, r3
_0810111C:
	mov r1, #240
	strb r1, [r0]
	b _0810119A
	.byte 0x00
	.byte 0x00
_08101124:
	.4byte gUnknown_03003E74
_08101128:
	cmp r6, #0
	beq _0810119A
	ldr r1, _081011A0  @ =0x00000F92
	add r0, r5, r1
	add r3, r4, r0
	ldrb r0, [r3]
	cmp r0, #9
	bhi _0810119A
	ldr r2, _081011A4  @ =gUnknown_03003E74
	ldr r1, _081011A8  @ =gUnknown_0817B30F
	add r0, r0, r1
	ldrb r3, [r0]
	lsr r3, r3, #2
	ldrh r2, [r2]
	add r3, r3, r2
	lsl r3, r3, #3
	mov r2, #170
	lsl r2, r2, #3
	add r0, r5, r2
	add r3, r3, r0
	ldr r1, _081011AC  @ =0x00001082
	add r0, r5, r1
	add r0, r4, r0
	ldrb r4, [r0]
	ldr r0, _081011B0  @ =gUnknown_0817AD58
	add r0, r4, r0
	ldrb r2, [r0]
	ldrh r5, [r3, #4]
	lsl r1, r5, #22
	lsr r1, r1, #22
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r1
	orr r2, r2, r0
	ldr r0, _081011B4  @ =0xFFFFFC00
	and r0, r0, r5
	orr r0, r0, r2
	strh r0, [r3, #4]
	ldr r0, _081011B8  @ =gUnknown_0817AD68
	add r4, r4, r0
	ldrb r1, [r4]
	lsl r1, r1, #24
	lsr r2, r1, #31
	lsl r2, r2, #5
	ldrb r4, [r3, #3]
	mov r0, #33
	neg r0, r0
	and r0, r0, r4
	orr r0, r0, r2
	lsr r1, r1, #30
	mov r2, #1
	and r1, r1, r2
	lsl r1, r1, #4
	sub r2, r2, #18
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r3, #3]
_0810119A:
	pop {r4-r6}
	pop {r0}
	bx r0
_081011A0:
	.4byte 0x00000F92
_081011A4:
	.4byte gUnknown_03003E74
_081011A8:
	.4byte gUnknown_0817B30F
_081011AC:
	.4byte 0x00001082
_081011B0:
	.4byte gUnknown_0817AD58
_081011B4:
	.4byte 0xFFFFFC00
_081011B8:
	.4byte gUnknown_0817AD68
	THUMB_FUNC_END sub_08100FC8

