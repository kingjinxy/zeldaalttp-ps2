	THUMB_FUNC_START sub_08111674
sub_08111674: @ 0x08111674
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r1, _081116A4  @ =gRam
	ldr r2, _081116A8  @ =0x00000FC2
	add r0, r1, r2
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #7
	bls _081116B0
	ldr r3, _081116AC  @ =0x00000D94
	add r0, r1, r3
	add r0, r7, r0
	mov r1, #14
	strb r1, [r0]
	add r0, r7, #0
	bl sub_080C6240
	b _081116C4
	.byte 0x00
	.byte 0x00
_081116A4:
	.4byte gRam
_081116A8:
	.4byte 0x00000FC2
_081116AC:
	.4byte 0x00000D94
_081116B0:
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r7, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	beq _081116C4
	b _081118DE
_081116C4:
	add r0, r7, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _081116D2
	b _081118DE
_081116D2:
	bl GetRandomInt
	ldr r5, _081118EC  @ =gRam
	mov r4, #15
	add r1, r4, #0
	and r1, r1, r0
	sub r1, r1, #2
	mov r2, #150
	lsl r2, r2, #4
	add r0, r5, r2
	strh r1, [r0]
	bl GetRandomInt
	and r4, r4, r0
	sub r4, r4, #2
	ldr r3, _081118F0  @ =0x00000964
	add r0, r5, r3
	strh r4, [r0]
	ldr r1, _081118F4  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	add r0, r7, #0
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0811170E
	add r0, r7, #0
	bl sub_080C9A58
_0811170E:
	ldr r2, _081118F8  @ =0x00000FD2
	add r0, r5, r2
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #1
	beq _0811175C
	ldr r4, _081118FC  @ =gUnknown_08155B4E
	ldr r3, _08111900  @ =0x00001078
	add r4, r4, r3
	ldr r1, _08111904  @ =0x00000EE2
	add r0, r5, r1
	add r0, r7, r0
	ldrb r0, [r0]
	sub r2, r2, #208
	add r1, r5, r2
	add r1, r7, r1
	ldrb r1, [r1]
	lsl r1, r1, #8
	orr r0, r0, r1
	ldr r3, _08111908  @ =0x00000ED2
	add r1, r5, r3
	add r1, r7, r1
	ldrb r1, [r1]
	add r3, r3, #32
	add r2, r5, r3
	add r2, r7, r2
	ldrb r2, [r2]
	lsl r2, r2, #8
	orr r1, r1, r2
	bl sub_080C8EEC
	lsl r0, r0, #16
	lsr r0, r0, #15
	ldr r1, _0811190C  @ =gUnknown_02018000
	add r0, r0, r1
	ldrh r1, [r4]
	ldrh r0, [r0]
	cmp r1, r0
	beq _08111766
_0811175C:
	ldr r2, _08111910  @ =0x00000FA2
	add r0, r5, r2
	add r0, r7, r0
	mov r1, #0
	strb r1, [r0]
_08111766:
	ldr r1, _081118EC  @ =gRam
	ldr r3, _08111914  @ =0x00000FC2
	add r0, r1, r3
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08111776
	b _081118DE
_08111776:
	ldr r2, _08111918  @ =0x000016EA
	add r0, r1, r2
	ldrb r1, [r0]
	add r0, r1, #0
	sub r0, r0, #10
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bls _08111794
	add r0, r1, #0
	cmp r0, #5
	beq _08111794
	cmp r0, #144
	beq _08111794
	b _081118DE
_08111794:
	mov r0, sp
	add r0, r0, #2
	add r1, r7, #0
	bl sub_080C4948
	lsl r0, r0, #24
	cmp r0, #0
	bne _081117A6
	b _081118DE
_081117A6:
	ldr r0, _081118EC  @ =gRam
	ldr r3, _0811191C  @ =0x00001052
	add r0, r0, r3
	add r0, r7, r0
	ldrb r0, [r0]
	mov r1, #218
	mov r9, r1
	cmp r0, #9
	beq _081117CC
	mov r2, #219
	mov r9, r2
	cmp r0, #10
	beq _081117CC
	mov r3, #217
	mov r9, r3
	cmp r0, #10
	bls _081117CC
	mov r0, #74
	mov r9, r0
_081117CC:
	mov r0, r9
	add r1, r7, #0
	bl sub_080CA538
	add r6, r0, #0
	cmp r6, #0
	bge _081117DC
	b _081118DE
_081117DC:
	ldr r1, _081118EC  @ =gRam
	mov r8, r1
	ldr r5, _08111920  @ =0x00000FB2
	add r5, r5, r8
	add r5, r7, r5
	ldr r0, _08111924  @ =0x000016D5
	add r0, r0, r8
	ldrb r0, [r0]
	lsr r0, r0, #1
	strb r0, [r5]
	add r0, r7, #0
	mov r1, #28
	bl sub_080CF140
	lsl r0, r6, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	bl GetRandomInt
	ldr r3, _08111928  @ =0x00000F22
	add r3, r3, r8
	add r3, r6, r3
	ldr r1, _0811192C  @ =gUnknown_0817D67C
	ldrb r2, [r5]
	add r2, r2, r1
	mov r4, #31
	add r1, r4, #0
	and r1, r1, r0
	ldrb r2, [r2]
	add r1, r1, r2
	sub r1, r1, #15
	strb r1, [r3]
	bl GetRandomInt
	ldr r3, _08111930  @ =0x00000F12
	add r3, r3, r8
	add r3, r6, r3
	ldr r2, _08111934  @ =gUnknown_0817D680
	ldrb r1, [r5]
	add r1, r1, r2
	and r4, r4, r0
	ldrb r1, [r1]
	add r4, r4, r1
	sub r4, r4, #15
	strb r4, [r3]
	ldr r0, _08111938  @ =0x00000D74
	add r0, r0, r8
	add r0, r6, r0
	mov r2, #1
	neg r2, r2
	add r4, r2, #0
	mov r1, #255
	strb r1, [r0]
	ldr r0, _0811193C  @ =0x000010E2
	add r0, r0, r8
	add r0, r6, r0
	mov r1, #32
	strb r1, [r0]
	ldr r0, _08111940  @ =0x000010B2
	add r0, r0, r8
	add r0, r6, r0
	strb r1, [r0]
	bl GetRandomInt
	ldr r2, _08111944  @ =0x00001152
	add r2, r2, r8
	add r2, r6, r2
	mov r1, #7
	and r1, r1, r0
	add r1, r1, #24
	strb r1, [r2]
	mov r3, r9
	cmp r3, #74
	bne _081118B0
	ldr r0, _08111948  @ =0x00000F82
	add r0, r0, r8
	add r0, r6, r0
	mov r1, #1
	strb r1, [r0]
	ldr r2, _0811194C  @ =0x00001032
	add r2, r2, r8
	add r2, r6, r2
	ldrb r1, [r2]
	mov r0, #238
	and r0, r0, r1
	mov r1, #24
	orr r0, r0, r1
	strb r0, [r2]
	ldr r0, _08111950  @ =0x00001122
	add r0, r0, r8
	add r0, r6, r0
	mov r1, #8
	strb r1, [r0]
	ldr r1, _081118F8  @ =0x00000FD2
	add r1, r1, r8
	add r1, r6, r1
	ldrb r0, [r1]
	orr r0, r0, r4
	strb r0, [r1]
	ldr r1, _08111954  @ =0x00001022
	add r1, r1, r8
	add r1, r6, r1
	ldrb r0, [r1]
	orr r0, r0, r4
	strb r0, [r1]
_081118B0:
	ldr r0, _08111914  @ =0x00000FC2
	add r0, r0, r8
	add r0, r7, r0
	mov r1, #16
	strb r1, [r0]
	ldr r0, _08111958  @ =0x000010C2
	add r0, r0, r8
	add r0, r7, r0
	strb r1, [r0]
	ldr r0, _081118F8  @ =0x00000FD2
	add r0, r0, r8
	add r1, r7, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _081118D2
	orr r0, r0, r4
	strb r0, [r1]
_081118D2:
	ldr r1, _0811191C  @ =0x00001052
	add r1, r1, r8
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_081118DE:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_081118EC:
	.4byte gRam
_081118F0:
	.4byte 0x00000964
_081118F4:
	.4byte 0x00000996
_081118F8:
	.4byte 0x00000FD2
_081118FC:
	.4byte gUnknown_08155B4E
_08111900:
	.4byte 0x00001078
_08111904:
	.4byte 0x00000EE2
_08111908:
	.4byte 0x00000ED2
_0811190C:
	.4byte gUnknown_02018000
_08111910:
	.4byte 0x00000FA2
_08111914:
	.4byte 0x00000FC2
_08111918:
	.4byte 0x000016EA
_0811191C:
	.4byte 0x00001052
_08111920:
	.4byte 0x00000FB2
_08111924:
	.4byte 0x000016D5
_08111928:
	.4byte 0x00000F22
_0811192C:
	.4byte gUnknown_0817D67C
_08111930:
	.4byte 0x00000F12
_08111934:
	.4byte gUnknown_0817D680
_08111938:
	.4byte 0x00000D74
_0811193C:
	.4byte 0x000010E2
_08111940:
	.4byte 0x000010B2
_08111944:
	.4byte 0x00001152
_08111948:
	.4byte 0x00000F82
_0811194C:
	.4byte 0x00001032
_08111950:
	.4byte 0x00001122
_08111954:
	.4byte 0x00001022
_08111958:
	.4byte 0x000010C2
	THUMB_FUNC_END sub_08111674

