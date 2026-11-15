	THUMB_FUNC_START sub_080D54B4
sub_080D54B4: @ 0x080D54B4
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r7, #0
	ldr r1, _080D54D4  @ =gRam
	ldr r2, _080D54D8  @ =0x0000165C
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D54E0
	ldr r3, _080D54DC  @ =0x00000FA2
	add r0, r1, r3
	add r0, r6, r0
	strb r7, [r0]
	b _080D55FA
	.byte 0x00
	.byte 0x00
_080D54D4:
	.4byte gRam
_080D54D8:
	.4byte 0x0000165C
_080D54DC:
	.4byte 0x00000FA2
_080D54E0:
	ldr r2, _080D555C  @ =0x000009C6
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080D54F0
	b _080D55F6
_080D54F0:
	ldr r3, _080D5560  @ =0x000009AD
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #35
	beq _080D550A
	ldr r2, _080D5564  @ =0x00001610
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080D550A
	add r0, r6, #0
	bl sub_080C6240
_080D550A:
	add r0, r6, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D5518
	b _080D5650
_080D5518:
	ldr r4, _080D5568  @ =gRam
	ldr r3, _080D556C  @ =0x00001122
	add r0, r4, r3
	add r5, r6, r0
	ldrb r0, [r5]
	mov r2, #63
	and r2, r2, r0
	ldr r3, _080D5570  @ =gUnknown_081750AC
	ldr r1, _080D5574  @ =0x00000996
	add r0, r4, r1
	ldrb r0, [r0]
	lsr r0, r0, #2
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	orr r2, r2, r0
	strb r2, [r5]
	bl sub_0809E3F4
	cmp r0, #0
	bne _080D55F6
	add r0, r6, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D557C
	ldr r2, _080D5578  @ =0x00000F62
	add r0, r4, r2
	add r0, r6, r0
	mov r1, #1
	strb r1, [r0]
	b _080D55FA
_080D555C:
	.4byte 0x000009C6
_080D5560:
	.4byte 0x000009AD
_080D5564:
	.4byte 0x00001610
_080D5568:
	.4byte gRam
_080D556C:
	.4byte 0x00001122
_080D5570:
	.4byte gUnknown_081750AC
_080D5574:
	.4byte 0x00000996
_080D5578:
	.4byte 0x00000F62
_080D557C:
	ldr r3, _080D5658  @ =0x00000F62
	add r0, r4, r3
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D55FA
	ldr r1, _080D565C  @ =0x0000180D
	add r0, r4, r1
	ldr r2, _080D5660  @ =0x000017AA
	add r1, r4, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	add r3, r2, #0
	orr r3, r3, r0
	ldr r1, _080D5664  @ =0x00001770
	add r0, r4, r1
	ldrb r0, [r0]
	orr r3, r3, r0
	cmp r3, #0
	bne _080D55FA
	ldr r2, _080D5668  @ =0x000009AC
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #9
	bne _080D55FA
	ldr r0, _080D566C  @ =0x000009AD
	add r1, r4, r0
	mov r0, #35
	strb r0, [r1]
	mov r2, #187
	lsl r2, r2, #5
	add r1, r4, r2
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080D5670  @ =0x000009E8
	add r0, r4, r1
	mov r2, #0
	strh r3, [r0]
	ldr r3, _080D5674  @ =0x000016CD
	add r0, r4, r3
	strb r2, [r0]
	ldr r1, _080D5678  @ =0x000016CE
	add r0, r4, r1
	strb r2, [r0]
	add r3, r3, #75
	add r1, r4, r3
	mov r0, #20
	strb r0, [r1]
	ldr r1, _080D567C  @ =0x000009C6
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	add r3, r3, #34
	add r1, r4, r3
	strb r0, [r1]
	ldr r1, _080D5680  @ =0x00000FA2
	add r0, r4, r1
	add r0, r6, r0
	strb r2, [r0]
	mov r7, #1
_080D55F6:
	cmp r7, #0
	beq _080D5650
_080D55FA:
	ldr r2, _080D5684  @ =gRam
	ldr r3, _080D5688  @ =0x00000F72
	add r1, r2, r3
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D5618
	ldr r1, _080D5658  @ =0x00000F62
	add r0, r2, r1
	add r0, r6, r0
	mov r1, #1
	strb r1, [r0]
_080D5618:
	ldr r3, _080D568C  @ =0x00000EE2
	add r0, r2, r3
	add r0, r6, r0
	ldr r1, _080D5690  @ =gUnknown_0201094F
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080D5694  @ =0x00000F02
	add r0, r2, r1
	add r0, r6, r0
	ldr r1, _080D5698  @ =gUnknown_0201095F
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080D569C  @ =gUnknown_0201096F
	ldrb r1, [r0]
	add r0, r0, #16
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #8
	sub r3, r3, #16
	add r0, r2, r3
	add r0, r6, r0
	strb r1, [r0]
	add r3, r3, #32
	add r0, r2, r3
	add r0, r6, r0
	lsr r1, r1, #8
	strb r1, [r0]
_080D5650:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D5658:
	.4byte 0x00000F62
_080D565C:
	.4byte 0x0000180D
_080D5660:
	.4byte 0x000017AA
_080D5664:
	.4byte 0x00001770
_080D5668:
	.4byte 0x000009AC
_080D566C:
	.4byte 0x000009AD
_080D5670:
	.4byte 0x000009E8
_080D5674:
	.4byte 0x000016CD
_080D5678:
	.4byte 0x000016CE
_080D567C:
	.4byte 0x000009C6
_080D5680:
	.4byte 0x00000FA2
_080D5684:
	.4byte gRam
_080D5688:
	.4byte 0x00000F72
_080D568C:
	.4byte 0x00000EE2
_080D5690:
	.4byte gUnknown_0201094F
_080D5694:
	.4byte 0x00000F02
_080D5698:
	.4byte gUnknown_0201095F
_080D569C:
	.4byte gUnknown_0201096F
	THUMB_FUNC_END sub_080D54B4

