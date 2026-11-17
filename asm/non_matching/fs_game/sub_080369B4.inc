	THUMB_FUNC_START sub_080369B4
sub_080369B4: @ 0x080369B4
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	ldr r0, _080369F0  @ =gUnknown_03000FC0
	ldrb r1, [r0, #16]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #32
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #16]
	ldr r0, _080369F0  @ =gUnknown_03000FC0
	ldrh r1, [r0, #18]
	ldr r2, _080369F4  @ =0x0000FFFF
	orr r1, r1, r2
	add r2, r1, #0
	strh r2, [r0, #18]
	ldr r1, _080369F0  @ =gUnknown_03000FC0
	ldrb r0, [r1, #1]
	cmp r0, #5
	bls _080369E4
	b _08036D9E
_080369E4:
	lsl r1, r0, #2
	ldr r2, _080369F8  @ =0x080369FC
	add r0, r1, r2
	ldr r1, [r0]
	mov pc, r1
	.byte 0x00
	.byte 0x00
_080369F0:
	.4byte gUnknown_03000FC0
_080369F4:
	.4byte 0x0000FFFF
_080369F8:
	.4byte _080369F8+0x4
	.4byte _08036A14
	.4byte _08036A72
	.4byte _08036AA8
	.4byte _08036B0C
	.4byte _08036B58
	.4byte _08036D94
_08036A14:
	ldr r0, _08036A5C  @ =gUnknown_03000FC0
	ldrb r1, [r0, #3]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #3]
	ldr r0, _08036A60  @ =gUnknown_03000BF0
	ldr r1, [r0]
	mov r2, #128
	lsl r2, r2, #1
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	beq _08036A6C
	ldr r0, _08036A64  @ =gLCDRegisterBuffer
	ldr r1, _08036A68  @ =0x04000128
	ldr r2, [r1]
	lsl r1, r2, #26
	lsr r2, r1, #30
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, _08036A5C  @ =gUnknown_03000FC0
	ldr r0, _08036A5C  @ =gUnknown_03000FC0
	ldr r1, _08036A5C  @ =gUnknown_03000FC0
	ldrb r2, [r1, #1]
	add r1, r2, #1
	ldrb r2, [r0, #1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #1]
	b _08036A70
	.byte 0x00
	.byte 0x00
_08036A5C:
	.4byte gUnknown_03000FC0
_08036A60:
	.4byte gUnknown_03000BF0
_08036A64:
	.4byte gLCDRegisterBuffer
_08036A68:
	.4byte 0x04000128
_08036A6C:
	bl sub_0800C4E8
_08036A70:
	b _08036D9E
_08036A72:
	ldr r0, _08036AA4  @ =gUnknown_03000FC0
	ldrb r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #20
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #2]
	ldr r1, _08036AA4  @ =gUnknown_03000FC0
	ldr r0, _08036AA4  @ =gUnknown_03000FC0
	ldr r1, _08036AA4  @ =gUnknown_03000FC0
	ldrb r2, [r1, #1]
	add r1, r2, #1
	ldrb r2, [r0, #1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #1]
	b _08036D9E
	.byte 0x00
	.byte 0x00
_08036AA4:
	.4byte gUnknown_03000FC0
_08036AA8:
	ldr r1, _08036B08  @ =gUnknown_03000FC0
	ldr r0, _08036B08  @ =gUnknown_03000FC0
	ldr r1, _08036B08  @ =gUnknown_03000FC0
	ldrb r2, [r1, #2]
	sub r1, r2, #1
	ldrb r2, [r0, #2]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #2]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08036B04
	bl sub_0800C4E8
	ldr r0, _08036B08  @ =gUnknown_03000FC0
	ldrb r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #20
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #2]
	ldr r1, _08036B08  @ =gUnknown_03000FC0
	ldr r0, _08036B08  @ =gUnknown_03000FC0
	ldr r1, _08036B08  @ =gUnknown_03000FC0
	ldrb r2, [r1, #1]
	add r1, r2, #1
	ldrb r2, [r0, #1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #1]
_08036B04:
	b _08036D9E
	.byte 0x00
	.byte 0x00
_08036B08:
	.4byte gUnknown_03000FC0
_08036B0C:
	ldr r1, _08036B54  @ =gUnknown_03000FC0
	ldr r0, _08036B54  @ =gUnknown_03000FC0
	ldr r1, _08036B54  @ =gUnknown_03000FC0
	ldrb r2, [r1, #2]
	sub r1, r2, #1
	ldrb r2, [r0, #2]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #2]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08036B50
	ldr r1, _08036B54  @ =gUnknown_03000FC0
	ldr r0, _08036B54  @ =gUnknown_03000FC0
	ldr r1, _08036B54  @ =gUnknown_03000FC0
	ldrb r2, [r1, #1]
	add r1, r2, #1
	ldrb r2, [r0, #1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #1]
_08036B50:
	b _08036D9E
	.byte 0x00
	.byte 0x00
_08036B54:
	.4byte gUnknown_03000FC0
_08036B58:
	ldr r0, _08036BCC  @ =gUnknown_03000FC0
	ldrb r1, [r0, #16]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #33
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #16]
	ldr r0, _08036BCC  @ =gUnknown_03000FC0
	ldr r1, _08036BD0  @ =gUnknown_03000BF0
	ldr r2, [r1]
	add r1, r2, #0
	mov r2, #15
	and r1, r1, r2
	ldrb r2, [r0, #3]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #3]
	mov r0, #33
	bl sub_08037B5C
	cmp r0, #0
	beq _08036C10
	ldr r0, _08036BCC  @ =gUnknown_03000FC0
	ldrb r1, [r0, #2]
	cmp r1, #20
	bls _08036BF0
	add r0, r7, #0
	ldr r1, _08036BCC  @ =gUnknown_03000FC0
	ldrb r2, [r1, #3]
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	add r2, r1, #0
	strh r2, [r0]
	add r0, r7, #0
	ldrh r1, [r0]
	cmp r1, #3
	beq _08036BD4
	add r0, r7, #0
	ldrh r1, [r0]
	cmp r1, #7
	beq _08036BD4
	add r0, r7, #0
	ldrh r1, [r0]
	cmp r1, #15
	beq _08036BD4
	b _08036BE8
	.byte 0x00
	.byte 0x00
_08036BCC:
	.4byte gUnknown_03000FC0
_08036BD0:
	.4byte gUnknown_03000BF0
_08036BD4:
	ldr r0, _08036BEC  @ =gUnknown_03000FC0
	ldrb r1, [r0, #17]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #17]
_08036BE8:
	b _08036C0A
	.byte 0x00
	.byte 0x00
_08036BEC:
	.4byte gUnknown_03000FC0
_08036BF0:
	ldr r1, _08036C0C  @ =gUnknown_03000FC0
	ldr r0, _08036C0C  @ =gUnknown_03000FC0
	ldr r1, _08036C0C  @ =gUnknown_03000FC0
	ldrb r2, [r1, #2]
	add r1, r2, #1
	ldrb r2, [r0, #2]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #2]
_08036C0A:
	b _08036C3E
_08036C0C:
	.4byte gUnknown_03000FC0
_08036C10:
	ldr r0, _08036CAC  @ =gUnknown_03000FC0
	ldrb r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #2]
	ldr r0, _08036CAC  @ =gUnknown_03000FC0
	ldr r1, _08036CAC  @ =gUnknown_03000FC0
	ldr r2, _08036CB0  @ =gLCDRegisterBuffer
	ldrb r3, [r2]
	mov r4, #1
	add r2, r4, #0
	lsl r2, r2, r3
	ldrb r1, [r1, #3]
	orr r1, r1, r2
	ldrb r2, [r0, #3]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #3]
_08036C3E:
	add r0, r7, #0
	ldr r1, _08036CAC  @ =gUnknown_03000FC0
	ldrb r2, [r1, #3]
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	add r2, r1, #0
	strh r2, [r0]
	add r0, r7, #0
	ldrh r1, [r0]
	cmp r1, #3
	bne _08036CB4
	ldr r1, _08036CAC  @ =gUnknown_03000FC0
	add r0, r1, #0
	add r1, r1, #57
	ldrb r0, [r1]
	cmp r0, #1
	bne _08036CAA
	ldr r1, _08036CAC  @ =gUnknown_03000FC0
	add r0, r1, #0
	add r1, r1, #77
	ldrb r0, [r1]
	cmp r0, #1
	bne _08036CAA
	ldr r0, _08036CAC  @ =gUnknown_03000FC0
	ldr r1, _08036CAC  @ =gUnknown_03000FC0
	ldrb r2, [r1, #3]
	mov r3, #64
	add r1, r2, #0
	orr r1, r1, r3
	ldrb r2, [r0, #3]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #3]
	ldr r1, _08036CAC  @ =gUnknown_03000FC0
	ldr r0, _08036CAC  @ =gUnknown_03000FC0
	ldr r1, _08036CAC  @ =gUnknown_03000FC0
	ldrb r2, [r1, #1]
	add r1, r2, #1
	ldrb r2, [r0, #1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #1]
_08036CAA:
	b _08036D8A
_08036CAC:
	.4byte gUnknown_03000FC0
_08036CB0:
	.4byte gLCDRegisterBuffer
_08036CB4:
	add r0, r7, #0
	ldrh r1, [r0]
	cmp r1, #7
	bne _08036D1C
	ldr r1, _08036D18  @ =gUnknown_03000FC0
	add r0, r1, #0
	add r1, r1, #57
	ldrb r0, [r1]
	cmp r0, #1
	bne _08036D16
	ldr r1, _08036D18  @ =gUnknown_03000FC0
	add r0, r1, #0
	add r1, r1, #77
	ldrb r0, [r1]
	cmp r0, #1
	bne _08036D16
	ldr r1, _08036D18  @ =gUnknown_03000FC0
	add r0, r1, #0
	add r1, r1, #97
	ldrb r0, [r1]
	cmp r0, #1
	bne _08036D16
	ldr r0, _08036D18  @ =gUnknown_03000FC0
	ldr r1, _08036D18  @ =gUnknown_03000FC0
	ldrb r2, [r1, #3]
	mov r3, #64
	add r1, r2, #0
	orr r1, r1, r3
	ldrb r2, [r0, #3]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #3]
	ldr r1, _08036D18  @ =gUnknown_03000FC0
	ldr r0, _08036D18  @ =gUnknown_03000FC0
	ldr r1, _08036D18  @ =gUnknown_03000FC0
	ldrb r2, [r1, #1]
	add r1, r2, #1
	ldrb r2, [r0, #1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #1]
_08036D16:
	b _08036D8A
_08036D18:
	.4byte gUnknown_03000FC0
_08036D1C:
	add r0, r7, #0
	ldrh r1, [r0]
	cmp r1, #15
	bne _08036D8A
	ldr r1, _08036D90  @ =gUnknown_03000FC0
	add r0, r1, #0
	add r1, r1, #57
	ldrb r0, [r1]
	cmp r0, #1
	bne _08036D8A
	ldr r1, _08036D90  @ =gUnknown_03000FC0
	add r0, r1, #0
	add r1, r1, #77
	ldrb r0, [r1]
	cmp r0, #1
	bne _08036D8A
	ldr r1, _08036D90  @ =gUnknown_03000FC0
	add r0, r1, #0
	add r1, r1, #97
	ldrb r0, [r1]
	cmp r0, #1
	bne _08036D8A
	ldr r1, _08036D90  @ =gUnknown_03000FC0
	add r0, r1, #0
	add r1, r1, #117
	ldrb r0, [r1]
	cmp r0, #1
	bne _08036D8A
	ldr r0, _08036D90  @ =gUnknown_03000FC0
	ldr r1, _08036D90  @ =gUnknown_03000FC0
	ldrb r2, [r1, #3]
	mov r3, #64
	add r1, r2, #0
	orr r1, r1, r3
	ldrb r2, [r0, #3]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #3]
	ldr r1, _08036D90  @ =gUnknown_03000FC0
	ldr r0, _08036D90  @ =gUnknown_03000FC0
	ldr r1, _08036D90  @ =gUnknown_03000FC0
	ldrb r2, [r1, #1]
	add r1, r2, #1
	ldrb r2, [r0, #1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #1]
_08036D8A:
	bl sub_080368D8
	b _08036D9E
_08036D90:
	.4byte gUnknown_03000FC0
_08036D94:
	bl sub_08036948
	bl sub_080368D8
	b _08036D9E
_08036D9E:
	ldr r0, _08036DE8  @ =gUnknown_03000FC0
	add r1, r0, #0
	add r0, r0, #56
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08036DE8  @ =gUnknown_03000FC0
	add r1, r0, #0
	add r0, r0, #76
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08036DE8  @ =gUnknown_03000FC0
	add r1, r0, #0
	add r0, r0, #96
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08036DE8  @ =gUnknown_03000FC0
	add r1, r0, #0
	add r0, r0, #116
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08036DE8:
	.4byte gUnknown_03000FC0
	THUMB_FUNC_END sub_080369B4

