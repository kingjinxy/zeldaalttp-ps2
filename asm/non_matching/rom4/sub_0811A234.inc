	THUMB_FUNC_START sub_0811A234
sub_0811A234: @ 0x0811A234
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, #0
	mov r8, r0
	ldr r1, _0811A28C  @ =gRam
	mov r2, #196
	lsl r2, r2, #5
	add r0, r1, r2
	add r0, r5, r0
	ldrb r0, [r0]
	mov r10, r1
	cmp r0, #0
	beq _0811A25A
	b _0811A810
_0811A25A:
	ldr r0, _0811A290  @ =0x00001818
	add r0, r0, r10
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811A268
	b _0811A590
_0811A268:
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r10
	strb r5, [r2]
	ldr r1, _0811A294  @ =0x0000177A
	add r1, r1, r10
	ldrb r0, [r1]
	cmp r0, #0
	beq _0811A314
	add r3, r0, #0
	sub r1, r3, #1
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r1, r0
	beq _0811A298
	mov r0, #0
	b _0811A8AE
	.byte 0x00
	.byte 0x00
_0811A28C:
	.4byte gRam
_0811A290:
	.4byte 0x00001818
_0811A294:
	.4byte 0x0000177A
_0811A298:
	ldr r0, _0811A2E8  @ =0x0000180D
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811A2AC
	ldr r0, _0811A2EC  @ =0x000016F8
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811A2C0
_0811A2AC:
	ldr r0, _0811A2F0  @ =0x00001895
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811A2C0
	ldr r0, _0811A2F4  @ =0x00001702
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #1
	bne _0811A304
_0811A2C0:
	mov r0, #196
	lsl r0, r0, #5
	add r0, r0, r10
	add r0, r5, r0
	mov r2, #0
	mov r1, #1
	strb r1, [r0]
	ldr r0, _0811A2F8  @ =0x00000A88
	add r0, r0, r10
	add r0, r5, r0
	strb r2, [r0]
	ldr r0, _0811A2FC  @ =0x0000177A
	add r0, r0, r10
	strb r2, [r0]
	ldr r0, _0811A300  @ =0x00000DBB
	add r0, r0, r10
	add r0, r5, r0
	strb r2, [r0]
	b _0811A810
	.byte 0x00
	.byte 0x00
_0811A2E8:
	.4byte 0x0000180D
_0811A2EC:
	.4byte 0x000016F8
_0811A2F0:
	.4byte 0x00001895
_0811A2F4:
	.4byte 0x00001702
_0811A2F8:
	.4byte 0x00000A88
_0811A2FC:
	.4byte 0x0000177A
_0811A300:
	.4byte 0x00000DBB
_0811A304:
	ldr r0, _0811A398  @ =0x00001791
	add r0, r0, r10
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _0811A314
	b _0811A430
_0811A314:
	mov r6, r10
	ldr r1, _0811A39C  @ =0x0000177A
	add r1, r1, r10
	mov r0, #0
	strb r0, [r1]
	ldr r0, _0811A3A0  @ =0x00000E29
	add r0, r0, r10
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811A32C
	b _0811A8AC
_0811A32C:
	ldr r0, _0811A398  @ =0x00001791
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811A338
	b _0811A8AC
_0811A338:
	add r0, r5, #0
	mov r1, #0
	bl sub_080BF880
	lsl r0, r0, #24
	cmp r0, #0
	bne _0811A348
	b _0811A8AC
_0811A348:
	ldr r0, _0811A3A4  @ =0x00000E47
	add r0, r0, r10
	add r0, r5, r0
	mov r1, #161
	lsl r1, r1, #4
	add r1, r1, r10
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	beq _0811A35E
	b _0811A8AC
_0811A35E:
	mov r0, #151
	lsl r0, r0, #4
	add r0, r0, r10
	mov r1, #0
	ldrsb r1, [r0, r1]
	cmp r1, #15
	bgt _0811A37A
	ldr r0, _0811A3A8  @ =0x00000974
	add r0, r0, r10
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #11
	ble _0811A3D8
_0811A37A:
	ldr r3, _0811A3A8  @ =0x00000974
	add r0, r6, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r1, r0
	blt _0811A3B0
	ldr r4, _0811A3AC  @ =0x00000968
	add r0, r6, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsr r4, r0, #31
	b _0811A3C2
	.byte 0x00
	.byte 0x00
_0811A398:
	.4byte 0x00001791
_0811A39C:
	.4byte 0x0000177A
_0811A3A0:
	.4byte 0x00000E29
_0811A3A4:
	.4byte 0x00000E47
_0811A3A8:
	.4byte 0x00000974
_0811A3AC:
	.4byte 0x00000968
_0811A3B0:
	mov r4, #2
	ldr r1, _0811A408  @ =0x0000096C
	add r0, r6, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _0811A3C2
	mov r4, #3
_0811A3C2:
	ldr r0, _0811A40C  @ =gUnknown_0817F55C
	add r0, r4, r0
	ldr r1, _0811A410  @ =gRam
	ldr r3, _0811A414  @ =0x000016D5
	add r2, r1, r3
	ldrb r0, [r0]
	mov r10, r1
	ldrb r2, [r2]
	cmp r0, r2
	beq _0811A3D8
	b _0811A8AC
_0811A3D8:
	add r1, r5, #1
	ldr r0, _0811A418  @ =0x0000177A
	add r0, r0, r10
	mov r2, #0
	strb r1, [r0]
	ldr r0, _0811A41C  @ =0x00001813
	add r0, r0, r10
	add r0, r5, r0
	strb r2, [r0]
	ldr r0, _0811A420  @ =0x00001844
	add r0, r0, r10
	add r0, r5, r0
	ldr r1, _0811A424  @ =gUnknown_0817F52C
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _0811A428  @ =0x00001818
	add r0, r0, r10
	add r0, r5, r0
	strb r2, [r0]
	ldr r0, _0811A42C  @ =0x00000A92
	add r0, r0, r10
	add r0, r5, r0
	strb r2, [r0]
	b _0811A8AC
_0811A408:
	.4byte 0x0000096C
_0811A40C:
	.4byte gUnknown_0817F55C
_0811A410:
	.4byte gRam
_0811A414:
	.4byte 0x000016D5
_0811A418:
	.4byte 0x0000177A
_0811A41C:
	.4byte 0x00001813
_0811A420:
	.4byte 0x00001844
_0811A424:
	.4byte gUnknown_0817F52C
_0811A428:
	.4byte 0x00001818
_0811A42C:
	.4byte 0x00000A92
_0811A430:
	ldr r0, _0811A480  @ =0x00001792
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #2
	beq _0811A4E8
	cmp r3, #0
	beq _0811A4E8
	ldr r0, _0811A484  @ =0x00001813
	add r0, r0, r10
	add r0, r5, r0
	ldrb r4, [r0]
	cmp r4, #3
	beq _0811A4E8
	cmp r4, #0
	bne _0811A462
	ldr r0, _0811A488  @ =0x00001844
	add r0, r0, r10
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #16
	bne _0811A462
	add r0, r5, #0
	mov r1, #10
	bl sub_080C19F8
_0811A462:
	ldr r2, _0811A48C  @ =gRam
	ldr r1, _0811A488  @ =0x00001844
	add r0, r2, r1
	add r1, r5, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	blt _0811A490
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0811A0DC
	b _0811A8AC
_0811A480:
	.4byte 0x00001792
_0811A484:
	.4byte 0x00001813
_0811A488:
	.4byte 0x00001844
_0811A48C:
	.4byte gRam
_0811A490:
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _0811A4B4  @ =0x00001813
	add r0, r2, r3
	add r0, r5, r0
	strb r4, [r0]
	ldr r0, _0811A4B8  @ =gUnknown_0817F52C
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	cmp r4, #3
	beq _0811A4BC
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0811A0DC
	b _0811A8AC
_0811A4B4:
	.4byte 0x00001813
_0811A4B8:
	.4byte gUnknown_0817F52C
_0811A4BC:
	ldr r4, _0811A4DC  @ =0x00000A92
	add r0, r2, r4
	add r0, r5, r0
	mov r1, #17
	strb r1, [r0]
	ldr r0, _0811A4E0  @ =0x00000DC5
	add r1, r2, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #17
	strb r0, [r1]
	ldr r1, _0811A4E4  @ =0x00000A74
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #0
	b _0811A8AA
_0811A4DC:
	.4byte 0x00000A92
_0811A4E0:
	.4byte 0x00000DC5
_0811A4E4:
	.4byte 0x00000A74
_0811A4E8:
	ldr r0, _0811A6D8  @ =0x00001813
	add r0, r0, r10
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #3
	beq _0811A4F6
	b _0811A8AC
_0811A4F6:
	ldr r0, _0811A6DC  @ =0x00001792
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #2
	beq _0811A51C
	ldr r0, _0811A6E0  @ =0x000009AD
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811A50C
	b _0811A794
_0811A50C:
	ldr r0, _0811A6E4  @ =0x00000546
	add r0, r0, r10
	ldrh r1, [r0]
	ldr r0, _0811A6E8  @ =0x0000C080
	and r0, r0, r1
	cmp r0, #0
	bne _0811A51C
	b _0811A794
_0811A51C:
	ldr r2, _0811A6EC  @ =gRam
	ldr r3, _0811A6F0  @ =0x00000E3D
	add r1, r2, r3
	add r1, r5, r1
	ldr r4, _0811A6F4  @ =0x000016D5
	add r0, r2, r4
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r3, #0
	strb r0, [r1]
	ldrb r4, [r1]
	ldr r1, _0811A6F8  @ =0x00000A88
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #24
	strb r1, [r0]
	ldr r0, _0811A6FC  @ =0x00000DED
	add r1, r2, r0
	add r1, r5, r1
	ldr r0, _0811A700  @ =gUnknown_0817F53C
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0811A704  @ =0x00000DF7
	add r1, r2, r0
	add r1, r5, r1
	ldr r0, _0811A708  @ =gUnknown_0817F540
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r4, _0811A6DC  @ =0x00001792
	add r1, r2, r4
	mov r0, #2
	strb r0, [r1]
	ldr r1, _0811A70C  @ =0x00001818
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #1
	strb r1, [r0]
	sub r4, r4, #24
	add r0, r2, r4
	strb r3, [r0]
	ldr r1, _0811A710  @ =0x00000DBB
	add r0, r2, r1
	add r0, r5, r0
	strb r3, [r0]
	add r4, r4, #153
	add r0, r2, r4
	add r0, r5, r0
	strb r3, [r0]
	ldr r0, _0811A714  @ =0x00000A74
	add r2, r2, r0
	add r2, r5, r2
	strb r3, [r2]
	add r0, r5, #0
	mov r1, #11
	bl sub_080C19F8
_0811A590:
	ldr r4, _0811A6EC  @ =gRam
	ldr r1, _0811A718  @ =0x00000E29
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811A5A0
	b _0811A8AC
_0811A5A0:
	ldr r2, _0811A6F8  @ =0x00000A88
	add r1, r4, r2
	add r1, r5, r1
	ldrb r0, [r1]
	sub r0, r0, #2
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080BF774
	add r0, r5, #0
	bl sub_080C1768
	ldr r3, _0811A71C  @ =0x00000A92
	add r0, r4, r3
	add r6, r5, r0
	ldrb r0, [r6]
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r4
	mov r9, r1
	strb r0, [r1]
	add r0, r5, #0
	mov r1, #0
	bl sub_080BF804
	ldr r2, _0811A710  @ =0x00000DBB
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811A632
	ldr r3, _0811A6F0  @ =0x00000E3D
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _0811A632
	ldr r1, _0811A720  @ =0x00000DC5
	add r0, r4, r1
	add r7, r5, r0
	ldrb r0, [r7]
	ldr r3, _0811A724  @ =0x00000978
	add r2, r4, r3
	strb r0, [r2]
	add r1, r1, #20
	add r0, r4, r1
	add r3, r5, r0
	ldrb r0, [r3]
	ldr r1, _0811A728  @ =0x00000979
	add r1, r1, r4
	mov r12, r1
	strb r0, [r1]
	mov r0, #0
	ldrsb r0, [r6, r0]
	mov r10, r4
	cmp r0, #0
	blt _0811A648
	ldrb r1, [r6]
	mov r4, r9
	mov r0, #0
	ldrsb r0, [r4, r0]
	sub r1, r1, r0
	ldr r0, _0811A72C  @ =0x0000097C
	add r0, r0, r10
	strh r1, [r0]
	ldrh r0, [r2]
	add r0, r0, r1
	strh r0, [r2]
	ldrb r0, [r2]
	strb r0, [r7]
	mov r1, r12
	ldrb r0, [r1]
	strb r0, [r3]
_0811A632:
	ldr r0, _0811A6EC  @ =gRam
	ldr r2, _0811A71C  @ =0x00000A92
	add r1, r0, r2
	add r1, r5, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	mov r10, r0
	cmp r1, #0
	blt _0811A648
	b _0811A8AC
_0811A648:
	ldr r0, _0811A71C  @ =0x00000A92
	add r0, r0, r10
	add r2, r5, r0
	mov r3, #0
	strb r3, [r2]
	ldr r0, _0811A70C  @ =0x00001818
	add r0, r0, r10
	add r1, r5, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	beq _0811A734
	mov r4, #0
	ldr r0, _0811A6FC  @ =0x00000DED
	add r0, r0, r10
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	bge _0811A680
	mov r4, #1
	neg r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
_0811A680:
	lsr r1, r1, #1
	cmp r4, #1
	bne _0811A68C
	neg r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
_0811A68C:
	strb r1, [r2]
	mov r4, #0
	ldr r0, _0811A704  @ =0x00000DF7
	add r0, r0, r10
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	bge _0811A6A8
	mov r4, #1
	neg r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
_0811A6A8:
	lsr r1, r1, #1
	cmp r4, #1
	bne _0811A6B4
	neg r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
_0811A6B4:
	strb r1, [r2]
	ldr r1, _0811A6F8  @ =0x00000A88
	add r1, r1, r10
	add r1, r5, r1
	ldr r0, _0811A730  @ =gUnknown_0817F554
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0811A710  @ =0x00000DBB
	add r0, r0, r10
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _0811A6D2
	strb r3, [r1]
_0811A6D2:
	mov r0, #1
	b _0811A8AE
	.byte 0x00
	.byte 0x00
_0811A6D8:
	.4byte 0x00001813
_0811A6DC:
	.4byte 0x00001792
_0811A6E0:
	.4byte 0x000009AD
_0811A6E4:
	.4byte 0x00000546
_0811A6E8:
	.4byte 0x0000C080
_0811A6EC:
	.4byte gRam
_0811A6F0:
	.4byte 0x00000E3D
_0811A6F4:
	.4byte 0x000016D5
_0811A6F8:
	.4byte 0x00000A88
_0811A6FC:
	.4byte 0x00000DED
_0811A700:
	.4byte gUnknown_0817F53C
_0811A704:
	.4byte 0x00000DF7
_0811A708:
	.4byte gUnknown_0817F540
_0811A70C:
	.4byte 0x00001818
_0811A710:
	.4byte 0x00000DBB
_0811A714:
	.4byte 0x00000A74
_0811A718:
	.4byte 0x00000E29
_0811A71C:
	.4byte 0x00000A92
_0811A720:
	.4byte 0x00000DC5
_0811A724:
	.4byte 0x00000978
_0811A728:
	.4byte 0x00000979
_0811A72C:
	.4byte 0x0000097C
_0811A730:
	.4byte gUnknown_0817F554
_0811A734:
	strb r3, [r2]
	strb r3, [r1]
	ldr r0, _0811A778  @ =0x00000DBB
	add r0, r0, r10
	add r0, r5, r0
	strb r3, [r0]
	ldr r0, _0811A77C  @ =0x00001719
	add r0, r0, r10
	strb r3, [r0]
	ldr r0, _0811A780  @ =0x00000DED
	add r0, r0, r10
	add r0, r5, r0
	strb r3, [r0]
	ldr r0, _0811A784  @ =0x00000DF7
	add r0, r0, r10
	add r0, r5, r0
	strb r3, [r0]
	ldr r0, _0811A788  @ =0x00000A88
	add r0, r0, r10
	add r0, r5, r0
	strb r3, [r0]
	ldr r0, _0811A78C  @ =0x0000186B
	add r0, r0, r10
	add r2, r5, r0
	ldrb r1, [r2]
	cmp r1, #0
	beq _0811A6D2
	ldr r0, _0811A790  @ =0x00000E47
	add r0, r0, r10
	add r0, r5, r0
	strb r1, [r0]
	strb r3, [r2]
	b _0811A6D2
	.byte 0x00
	.byte 0x00
_0811A778:
	.4byte 0x00000DBB
_0811A77C:
	.4byte 0x00001719
_0811A780:
	.4byte 0x00000DED
_0811A784:
	.4byte 0x00000DF7
_0811A788:
	.4byte 0x00000A88
_0811A78C:
	.4byte 0x0000186B
_0811A790:
	.4byte 0x00000E47
_0811A794:
	ldr r0, _0811A7CC  @ =0x00000E29
	add r0, r0, r10
	add r0, r5, r0
	ldrb r3, [r0]
	cmp r3, #0
	beq _0811A7A2
	b _0811A8AC
_0811A7A2:
	ldr r0, _0811A7D0  @ =0x00001716
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #1
	bls _0811A7E0
	ldr r0, _0811A7D4  @ =0x00001719
	add r0, r0, r10
	strb r3, [r0]
	add r0, r5, #1
	ldr r1, _0811A7D8  @ =0x0000177A
	add r1, r1, r10
	ldrb r4, [r1]
	cmp r0, r4
	bne _0811A8AC
	strb r3, [r1]
	ldr r0, _0811A7DC  @ =0x00000E15
	add r0, r0, r10
	add r0, r5, r0
	strb r3, [r0]
	b _0811A8AC
	.byte 0x00
	.byte 0x00
_0811A7CC:
	.4byte 0x00000E29
_0811A7D0:
	.4byte 0x00001716
_0811A7D4:
	.4byte 0x00001719
_0811A7D8:
	.4byte 0x0000177A
_0811A7DC:
	.4byte 0x00000E15
_0811A7E0:
	ldr r0, _0811A7FC  @ =0x000017D4
	add r0, r0, r10
	ldr r1, _0811A800  @ =0x0000176C
	add r1, r1, r10
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	beq _0811A808
	ldr r0, _0811A804  @ =0x00001791
	add r0, r0, r10
	strb r3, [r0]
	b _0811A51C
	.byte 0x00
	.byte 0x00
_0811A7FC:
	.4byte 0x000017D4
_0811A800:
	.4byte 0x0000176C
_0811A804:
	.4byte 0x00001791
_0811A808:
	add r0, r5, #0
	bl sub_0811A158
	b _0811A8AC
_0811A810:
	ldr r0, _0811A87C  @ =0x00000E29
	add r0, r0, r10
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811A8AC
	ldr r0, _0811A880  @ =0x00001813
	add r0, r0, r10
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #3
	bne _0811A89A
	ldr r0, _0811A884  @ =0x00000A88
	add r0, r0, r10
	add r0, r5, r0
	ldrb r1, [r0]
	sub r1, r1, #2
	strb r1, [r0]
	add r0, r5, #0
	mov r1, #0
	bl sub_080BF804
	ldr r0, _0811A888  @ =0x00000A92
	add r0, r0, r10
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811A84C
	cmp r0, #251
	bls _0811A8AC
_0811A84C:
	ldr r2, _0811A88C  @ =gRam
	ldr r1, _0811A888  @ =0x00000A92
	add r0, r2, r1
	add r4, r5, r0
	mov r3, #0
	strb r3, [r4]
	mov r0, #196
	lsl r0, r0, #5
	add r1, r2, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r2
	cmp r0, #3
	beq _0811A890
	ldr r0, _0811A884  @ =0x00000A88
	add r0, r0, r10
	add r0, r5, r0
	mov r1, #24
	b _0811A8AA
	.byte 0x00
	.byte 0x00
_0811A87C:
	.4byte 0x00000E29
_0811A880:
	.4byte 0x00001813
_0811A884:
	.4byte 0x00000A88
_0811A888:
	.4byte 0x00000A92
_0811A88C:
	.4byte gRam
_0811A890:
	strb r3, [r4]
	ldr r0, _0811A8BC  @ =0x00001813
	add r0, r0, r10
	add r0, r5, r0
	strb r3, [r0]
_0811A89A:
	mov r0, #196
	lsl r0, r0, #5
	add r0, r0, r10
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	ldr r0, _0811A8C0  @ =0x00001719
	add r0, r0, r10
_0811A8AA:
	strb r1, [r0]
_0811A8AC:
	mov r0, r8
_0811A8AE:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
_0811A8BC:
	.4byte 0x00001813
_0811A8C0:
	.4byte 0x00001719
	THUMB_FUNC_END sub_0811A234

