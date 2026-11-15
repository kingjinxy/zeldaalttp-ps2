	THUMB_FUNC_START sub_080F5630
sub_080F5630: @ 0x080F5630
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _080F5698  @ =gRam
	ldr r1, _080F569C  @ =0x00000F52
	add r0, r2, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F5646
	b _080F5790
_080F5646:
	ldr r3, _080F56A0  @ =0x00000F62
	add r0, r2, r3
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #15
	bhi _080F5660
	ldr r1, _080F56A4  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _080F5666
_080F5660:
	add r0, r5, #0
	bl sub_080C6240
_080F5666:
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F5674
	b _080F57C8
_080F5674:
	add r0, r5, #0
	bl sub_080C841C
	add r6, r0, #0
	cmp r6, #0
	beq _080F5682
	b _080F57C8
_080F5682:
	ldr r7, _080F5698  @ =gRam
	ldr r3, _080F56A0  @ =0x00000F62
	add r0, r7, r3
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _080F56AC
	ldr r1, _080F56A8  @ =0x00000FA2
	add r0, r7, r1
	b _080F56D4
	.byte 0x00
	.byte 0x00
_080F5698:
	.4byte gRam
_080F569C:
	.4byte 0x00000F52
_080F56A0:
	.4byte 0x00000F62
_080F56A4:
	.4byte 0x00000996
_080F56A8:
	.4byte 0x00000FA2
_080F56AC:
	add r0, r5, #0
	bl sub_080C99DC
	add r0, r5, #0
	bl sub_080C4F98
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	beq _080F56E4
	add r0, r5, #0
	mov r1, #112
	bl sub_080CF140
	ldr r0, _080F56DC  @ =gHeartsFiller
	ldrb r1, [r0]
	add r1, r1, #8
	strb r1, [r0]
	ldr r3, _080F56E0  @ =0x00000FA2
	add r0, r7, r3
_080F56D4:
	add r0, r5, r0
	strb r6, [r0]
	b _080F57C8
	.byte 0x00
	.byte 0x00
_080F56DC:
	.4byte gHeartsFiller
_080F56E0:
	.4byte 0x00000FA2
_080F56E4:
	ldr r1, _080F5720  @ =0x00000996
	add r0, r7, r1
	ldrb r1, [r0]
	mov r6, #1
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080F56FA
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
_080F56FA:
	ldr r3, _080F5724  @ =0x00001142
	add r0, r7, r3
	add r1, r5, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r3, #128
	and r0, r0, r3
	cmp r0, #0
	bne _080F572C
	ldr r0, _080F5728  @ =0x00001152
	add r1, r7, r0
	add r1, r5, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	b _080F57C8
	.byte 0x00
	.byte 0x00
_080F5720:
	.4byte 0x00000996
_080F5724:
	.4byte 0x00001142
_080F5728:
	.4byte 0x00001152
_080F572C:
	strb r2, [r1]
	ldr r1, _080F5780  @ =0x00001152
	add r0, r7, r1
	add r2, r5, r0
	ldrb r1, [r2]
	add r0, r1, #0
	and r0, r0, r3
	cmp r0, #0
	bne _080F5740
	mov r1, #0
_080F5740:
	mvn r0, r1
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #25
	strb r0, [r2]
	ldr r3, _080F5784  @ =0x00000F22
	add r0, r7, r3
	add r3, r5, r0
	ldrb r2, [r3]
	cmp r2, #0
	beq _080F5764
	ldr r0, _080F5788  @ =gUnknown_08179888
	lsr r1, r2, #7
	and r1, r1, r6
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r2, r0
	strb r0, [r3]
_080F5764:
	ldr r1, _080F578C  @ =0x00000F12
	add r0, r7, r1
	add r3, r5, r0
	ldrb r2, [r3]
	cmp r2, #0
	beq _080F57C8
	ldr r0, _080F5788  @ =gUnknown_08179888
	lsr r1, r2, #7
	and r1, r1, r6
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r2, r0
	strb r0, [r3]
	b _080F57C8
_080F5780:
	.4byte 0x00001152
_080F5784:
	.4byte 0x00000F22
_080F5788:
	.4byte gUnknown_08179888
_080F578C:
	.4byte 0x00000F12
_080F5790:
	ldr r3, _080F57D0  @ =0x00001062
	add r0, r2, r3
	add r0, r5, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080F57C8
	sub r3, r3, #192
	add r0, r2, r3
	add r0, r5, r0
	strb r1, [r0]
	bl GetRandomInt
	mov r1, #3
	and r1, r1, r0
	add r4, r1, #2
	add r0, r4, #0
	cmp r0, #0
	blt _080F57C8
_080F57B4:
	add r0, r5, #0
	bl sub_080F57D4
	lsl r0, r4, #24
	mov r1, #255
	lsl r1, r1, #24
	add r0, r0, r1
	lsr r4, r0, #24
	cmp r0, #0
	bge _080F57B4
_080F57C8:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F57D0:
	.4byte 0x00001062
	THUMB_FUNC_END sub_080F5630

