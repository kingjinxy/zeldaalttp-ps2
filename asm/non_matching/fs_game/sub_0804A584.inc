	THUMB_FUNC_START sub_0804A584
sub_0804A584: @ 0x0804A584
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, _0804A5E4  @ =gUnknown_0813F834
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #0
	bne _0804A5AA
	b _0804A788
_0804A5AA:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0804A5C2
	b _0804A788
_0804A5C2:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #127
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #12
	bls _0804A5DA
	b _0804A788
_0804A5DA:
	lsl r1, r0, #2
	ldr r2, _0804A5E8  @ =0x0804A5EC
	add r0, r1, r2
	ldr r1, [r0]
	mov pc, r1
_0804A5E4:
	.4byte gUnknown_0813F834
_0804A5E8:
	.4byte 0x0804A5EC
	.4byte _0804A620
	.4byte _0804A6B4
	.4byte _0804A788
	.4byte _0804A788
	.4byte _0804A6E4
	.4byte _0804A788
	.4byte _0804A788
	.4byte _0804A788
	.4byte _0804A6E4
	.4byte _0804A788
	.4byte _0804A788
	.4byte _0804A788
	.4byte _0804A6E4
_0804A620:
	ldr r0, _0804A6B0  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrh r1, [r0, #54]
	mov r2, #128
	lsl r2, r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _0804A69E
	mov r0, #85
	mov r1, #1
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804A69E
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #76]
	str r2, [r0, #88]
	ldr r0, _0804A6B0  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _0804A6B0  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldr r3, [r2, #76]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	mov r3, #128
	lsl r3, r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
_0804A69E:
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #1
	bne _0804A6AC
	ldr r0, [r7]
	bl DeleteThisEntity
_0804A6AC:
	b _0804A788
	.byte 0x00
	.byte 0x00
_0804A6B0:
	.4byte gUnknown_03006A30
_0804A6B4:
	ldr r1, [r7]
	ldrb r0, [r1, #11]
	cmp r0, #1
	beq _0804A6C2
	cmp r0, #2
	beq _0804A6D2
	b _0804A6E2
_0804A6C2:
	ldr r0, [r7]
	mov r1, #3
	bl sub_0804B708
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0804A6E2
_0804A6D2:
	ldr r0, [r7]
	mov r1, #2
	bl sub_0804B708
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0804A6E2
_0804A6E2:
	b _0804A788
_0804A6E4:
	ldr r1, [r7]
	ldrb r0, [r1, #11]
	cmp r0, #2
	beq _0804A760
	cmp r0, #2
	bgt _0804A6F6
	cmp r0, #1
	beq _0804A750
	b _0804A786
_0804A6F6:
	cmp r0, #3
	beq _0804A6FC
	b _0804A786
_0804A6FC:
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #69
	ldrb r3, [r2]
	sub r1, r3, #4
	add r2, r0, #0
	add r0, r0, #69
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r1, [r0, #112]
	cmp r1, #0
	beq _0804A74E
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #69
	ldrb r0, [r1]
	cmp r0, #0
	beq _0804A74E
	mov r0, #45
	bl play_sound
_0804A74E:
	b _0804A786
_0804A750:
	ldr r0, [r7]
	mov r1, #1
	bl sub_0804B708
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0804A786
_0804A760:
	bl sub_0800099C
	mov r1, #15
	and r0, r0, r1
	cmp r0, #0
	beq _0804A776
	ldr r0, [r7]
	mov r1, #0
	bl sub_0804CABC
	b _0804A77E
_0804A776:
	ldr r0, [r7]
	mov r1, #7
	bl sub_0804CABC
_0804A77E:
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0804A786
_0804A786:
	b _0804A788
_0804A788:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804A584

