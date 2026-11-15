	THUMB_FUNC_START sub_080E75CC
sub_080E75CC: @ 0x080E75CC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080E76A8  @ =gRam
	ldr r1, _080E76AC  @ =0x000009B2
	add r0, r6, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080E76DC
	ldr r2, _080E76B0  @ =0x00000D94
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #48
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080E7948
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	beq _080E7606
	b _080E77B2
_080E7606:
	ldr r3, _080E76B4  @ =0x00001052
	add r2, r6, r3
	add r2, r5, r2
	ldr r1, _080E76B8  @ =0x00000FB2
	add r0, r6, r1
	add r0, r0, r5
	mov r8, r0
	ldrb r0, [r2]
	mov r3, r8
	ldrb r1, [r3]
	sub r0, r0, r1
	strb r0, [r2]
	add r0, r5, #0
	bl sub_080C5044
	add r0, r5, #0
	bl sub_080C99DC
	ldr r1, _080E76BC  @ =0x00001152
	add r0, r6, r1
	add r7, r5, r0
	ldrb r0, [r7]
	sub r0, r0, #2
	strb r0, [r7]
	ldr r2, _080E76C0  @ =0x00001142
	add r0, r6, r2
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080E7648
	b _080E77B2
_080E7648:
	strb r4, [r2]
	add r0, r5, #0
	bl sub_080C7A48
	ldr r3, _080E76C4  @ =0x00001042
	add r0, r6, r3
	add r0, r5, r0
	ldrb r1, [r0]
	neg r0, r1
	orr r0, r0, r1
	lsr r4, r0, #31
	ldr r0, _080E76C8  @ =gUnknown_0817780C
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r7]
	ldr r0, _080E76CC  @ =0x00000F12
	add r1, r6, r0
	add r1, r5, r1
	ldr r0, _080E76D0  @ =gUnknown_0817780E
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	bl GetRandomInt
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _080E7684
	add r0, r4, #2
	add r4, r0, #0
_080E7684:
	ldr r2, _080E76D4  @ =0x00000F22
	add r1, r6, r2
	add r1, r5, r1
	ldr r0, _080E76D8  @ =gUnknown_08177810
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, #2
	and r0, r0, r4
	sub r0, r0, #1
	mov r3, r8
	strb r0, [r3]
	add r0, r5, #0
	mov r1, #30
	bl sub_080CF0AC
	b _080E77B2
	.byte 0x00
	.byte 0x00
_080E76A8:
	.4byte gRam
_080E76AC:
	.4byte 0x000009B2
_080E76B0:
	.4byte 0x00000D94
_080E76B4:
	.4byte 0x00001052
_080E76B8:
	.4byte 0x00000FB2
_080E76BC:
	.4byte 0x00001152
_080E76C0:
	.4byte 0x00001142
_080E76C4:
	.4byte 0x00001042
_080E76C8:
	.4byte gUnknown_0817780C
_080E76CC:
	.4byte 0x00000F12
_080E76D0:
	.4byte gUnknown_0817780E
_080E76D4:
	.4byte 0x00000F22
_080E76D8:
	.4byte gUnknown_08177810
_080E76DC:
	ldr r1, _080E77BC  @ =0x00001610
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080E76EC
	add r0, r5, #0
	bl sub_080C58F0
_080E76EC:
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E77B2
	ldr r3, _080E77C0  @ =0x00001122
	add r2, r6, r3
	add r2, r5, r2
	ldr r0, _080E77C4  @ =0x00000996
	add r4, r6, r0
	ldrb r0, [r4]
	lsl r0, r0, #2
	mov r3, #64
	neg r3, r3
	add r1, r3, #0
	and r0, r0, r1
	strb r0, [r2]
	add r0, r5, #0
	bl sub_080C99DC
	ldrb r1, [r4]
	add r0, r5, #0
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080E77B2
	ldr r1, _080E77C8  @ =0x00001622
	add r0, r6, r1
	ldrb r1, [r0]
	ldr r2, _080E77CC  @ =0x00001623
	add r0, r6, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080E77D0  @ =0x000016C4
	add r0, r6, r3
	ldrb r2, [r0]
	add r3, r3, #1
	add r0, r6, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	add r1, r1, #4
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #15
	bhi _080E778A
	ldr r1, _080E77D4  @ =0x00001624
	add r0, r6, r1
	ldrb r1, [r0]
	ldr r2, _080E77D8  @ =0x00001625
	add r0, r6, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r3, r3, #5
	add r0, r6, r3
	ldrb r2, [r0]
	add r3, r3, #1
	add r0, r6, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	sub r1, r1, #4
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #11
	bhi _080E778A
	add r0, r5, #0
	bl sub_080C3BD0
_080E778A:
	ldr r6, _080E77DC  @ =gRam
	ldr r1, _080E77C4  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	add r4, r5, #0
	eor r4, r4, r0
	mov r0, #3
	and r4, r4, r0
	cmp r4, #0
	bne _080E77B2
	add r0, r5, #0
	bl sub_080C7A48
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E77B2
	ldr r2, _080E77E0  @ =0x00000FA2
	add r0, r6, r2
	add r0, r5, r0
	strb r4, [r0]
_080E77B2:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080E77BC:
	.4byte 0x00001610
_080E77C0:
	.4byte 0x00001122
_080E77C4:
	.4byte 0x00000996
_080E77C8:
	.4byte 0x00001622
_080E77CC:
	.4byte 0x00001623
_080E77D0:
	.4byte 0x000016C4
_080E77D4:
	.4byte 0x00001624
_080E77D8:
	.4byte 0x00001625
_080E77DC:
	.4byte gRam
_080E77E0:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080E75CC

