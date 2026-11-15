	THUMB_FUNC_START sub_0808EEE4
sub_0808EEE4: @ 0x0808EEE4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _0808EFFC  @ =gRam
	ldr r2, _0808F000  @ =0x00000EE2
	add r1, r3, r2
	add r1, r0, r1
	ldrb r2, [r1]
	ldr r4, _0808F004  @ =0x00000F02
	add r1, r3, r4
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #8
	orr r2, r2, r1
	sub r2, r2, #20
	mov r5, #8
	neg r5, r5
	add r4, r5, #0
	and r2, r2, r4
	lsl r2, r2, #16
	lsr r2, r2, #16
	str r2, [sp]
	ldr r2, _0808F008  @ =0x00000ED2
	add r1, r3, r2
	add r1, r0, r1
	ldrb r1, [r1]
	ldr r5, _0808F00C  @ =0x00000EF2
	add r2, r3, r5
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	sub r1, r1, #23
	and r1, r1, r4
	lsl r1, r1, #16
	lsr r1, r1, #16
	str r1, [sp, #4]
	mov r6, #3
	add r5, r3, #0
	ldr r0, _0808F010  @ =0x00000974
	add r0, r0, r5
	mov r10, r0
_0808EF42:
	lsl r2, r6, #4
	ldr r3, [sp, #4]
	add r1, r3, r2
	ldr r4, _0808F014  @ =0x00000C88
	add r0, r5, r4
	ldrh r0, [r0]
	sub r1, r1, r0
	ldr r3, _0808F018  @ =gUnknown_03002EBA
	ldrh r0, [r3]
	and r1, r1, r0
	mov r0, #240
	and r0, r0, r1
	lsl r7, r0, #2
	mov r0, #128
	lsl r0, r0, #2
	and r0, r0, r1
	lsl r0, r0, #4
	orr r7, r7, r0
	mov r0, #128
	lsl r0, r0, #1
	and r1, r1, r0
	lsl r0, r1, #3
	orr r7, r7, r0
	mov r4, #3
	mov r9, r4
	str r2, [sp, #12]
	sub r6, r6, #1
	str r6, [sp, #8]
	ldr r6, [sp]
	add r6, r6, #48
_0808EF7E:
	mov r0, #0
	mov r8, r0
	ldr r1, _0808F01C  @ =0x00000C8C
	add r0, r5, r1
	ldrh r0, [r0]
	sub r1, r6, r0
	ldr r2, _0808F018  @ =gUnknown_03002EBA
	ldrh r0, [r2]
	and r1, r1, r0
	mov r0, #240
	and r0, r0, r1
	asr r4, r0, #3
	mov r0, #128
	lsl r0, r0, #2
	and r0, r0, r1
	lsl r0, r0, #3
	orr r4, r4, r0
	mov r0, #128
	lsl r0, r0, #1
	and r1, r1, r0
	lsl r0, r1, #2
	orr r4, r4, r0
	orr r4, r4, r7
	lsl r1, r4, #1
	ldr r3, _0808F020  @ =gUnknown_02018000
	add r0, r1, r3
	ldrh r2, [r0]
	ldr r3, _0808F024  @ =0x000016B6
	add r0, r5, r3
	strh r2, [r0]
	ldr r2, _0808F028  @ =gUnknown_02018002
	add r0, r1, r2
	ldrh r2, [r0]
	add r3, r3, #2
	add r0, r5, r3
	strh r2, [r0]
	ldr r2, _0808F02C  @ =gUnknown_02018040
	add r0, r1, r2
	ldrh r2, [r0]
	add r3, r3, #2
	add r0, r5, r3
	strh r2, [r0]
	ldr r0, _0808F030  @ =gUnknown_02018042
	add r1, r1, r0
	ldrh r1, [r1]
	ldr r2, _0808F034  @ =0x000016BC
	add r0, r5, r2
	strh r1, [r0]
	ldr r3, _0808F038  @ =0x00000968
	add r0, r5, r3
	strh r4, [r0]
	mov r0, #216
	bl sub_0808C148
	cmp r0, #0
	beq _0808F044
	ldr r0, _0808F03C  @ =0x0000371C
	ldr r1, _0808F040  @ =gUnknown_03002BAC
	strh r0, [r1]
	mov r0, #2
	mov r2, r10
	strh r0, [r2]
	b _0808F088
_0808EFFC:
	.4byte gRam
_0808F000:
	.4byte 0x00000EE2
_0808F004:
	.4byte 0x00000F02
_0808F008:
	.4byte 0x00000ED2
_0808F00C:
	.4byte 0x00000EF2
_0808F010:
	.4byte 0x00000974
_0808F014:
	.4byte 0x00000C88
_0808F018:
	.4byte gUnknown_03002EBA
_0808F01C:
	.4byte 0x00000C8C
_0808F020:
	.4byte gUnknown_02018000
_0808F024:
	.4byte 0x000016B6
_0808F028:
	.4byte gUnknown_02018002
_0808F02C:
	.4byte gUnknown_02018040
_0808F030:
	.4byte gUnknown_02018042
_0808F034:
	.4byte 0x000016BC
_0808F038:
	.4byte 0x00000968
_0808F03C:
	.4byte 0x0000371C
_0808F040:
	.4byte gUnknown_03002BAC
_0808F044:
	ldr r0, _0808F05C  @ =0x00001CA8
	bl sub_0808C148
	cmp r0, #0
	beq _0808F068
	ldr r0, _0808F060  @ =0x00003720
	ldr r3, _0808F064  @ =gUnknown_03002BAC
	strh r0, [r3]
	mov r0, #4
	mov r1, r10
	strh r0, [r1]
	b _0808F088
_0808F05C:
	.4byte 0x00001CA8
_0808F060:
	.4byte 0x00003720
_0808F064:
	.4byte gUnknown_03002BAC
_0808F068:
	ldr r0, _0808F0FC  @ =0x00000DF8
	bl sub_0808C148
	cmp r0, #0
	beq _0808F082
	ldr r0, _0808F100  @ =0x00003714
	ldr r2, _0808F104  @ =gUnknown_03002BAC
	strh r0, [r2]
	mov r0, #3
	mov r3, r10
	strh r0, [r3]
	mov r0, #1
	mov r8, r0
_0808F082:
	mov r1, r8
	cmp r1, #0
	beq _0808F0D2
_0808F088:
	ldr r2, _0808F108  @ =0x00000968
	add r0, r5, r2
	mov r3, #0
	ldrsh r0, [r0, r3]
	bl sub_080925A4
	bl sub_0813386C
	ldr r1, _0808F10C  @ =0x0000096C
	add r0, r5, r1
	strh r4, [r0]
	ldr r2, _0808F104  @ =gUnknown_03002BAC
	mov r3, #0
	ldrsh r0, [r2, r3]
	bl sub_0808C1B4
	add r0, r6, #0
	mov r4, #8
	neg r4, r4
	and r0, r0, r4
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	strh r0, [r1]
	ldr r3, [sp, #4]
	ldr r4, [sp, #12]
	add r0, r3, r4
	mov r1, #8
	neg r1, r1
	and r0, r0, r1
	add r2, r2, #4
	add r1, r5, r2
	strh r0, [r1]
	mov r3, r10
	ldrb r0, [r3]
	bl Sprite_SpawnImmediatelySmashedTerrain
_0808F0D2:
	sub r6, r6, #16
	mov r4, #1
	neg r4, r4
	add r9, r9, r4
	mov r0, r9
	cmp r0, #0
	beq _0808F0E2
	b _0808EF7E
_0808F0E2:
	ldr r6, [sp, #8]
	cmp r6, #0
	beq _0808F0EA
	b _0808EF42
_0808F0EA:
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
_0808F0FC:
	.4byte 0x00000DF8
_0808F100:
	.4byte 0x00003714
_0808F104:
	.4byte gUnknown_03002BAC
_0808F108:
	.4byte 0x00000968
_0808F10C:
	.4byte 0x0000096C
	THUMB_FUNC_END sub_0808EEE4

