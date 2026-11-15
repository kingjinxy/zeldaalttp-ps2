	THUMB_FUNC_START sub_080B366C
sub_080B366C: @ 0x080B366C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	bl sub_08069F08
	ldr r7, _080B3734  @ =gRam
	ldr r1, _080B3738  @ =0x0000099D
	add r0, r7, r1
	mov r6, #0
	ldrsb r6, [r0, r6]
	cmp r6, #0
	bne _080B372A
	ldr r2, _080B373C  @ =0x00000A4C
	add r1, r7, r2
	ldrh r0, [r1]
	add r0, r0, #1
	mov r5, #0
	strh r0, [r1]
	ldr r4, _080B3740  @ =0x00000A5A
	add r0, r7, r4
	strb r5, [r0]
	ldr r5, _080B3744  @ =0x0000173C
	add r1, r7, r5
	mov r0, #148
	lsl r0, r0, #2
	strh r0, [r1]
	ldr r0, _080B3748  @ =0x00000A28
	add r3, r7, r0
	ldrh r1, [r3]
	ldr r2, _080B374C  @ =0x00001AB4
	add r0, r7, r2
	strh r1, [r0]
	sub r4, r4, #48
	add r2, r7, r4
	ldrh r1, [r2]
	ldr r5, _080B3750  @ =0x00001AB6
	add r0, r7, r5
	strh r1, [r0]
	strh r6, [r3]
	strh r6, [r2]
	mov r0, #149
	lsl r0, r0, #4
	add r0, r0, r7
	mov r8, r0
	ldrh r1, [r0]
	ldr r2, _080B3754  @ =0x00001A98
	add r0, r7, r2
	strh r1, [r0]
	ldr r5, _080B3758  @ =0x00000956
	add r4, r7, r5
	ldrh r1, [r4]
	add r2, r2, #6
	add r0, r7, r2
	strh r1, [r0]
	sub r5, r5, #4
	add r5, r5, r7
	mov r12, r5
	ldrh r1, [r5]
	sub r2, r2, #4
	add r0, r7, r2
	strh r1, [r0]
	ldr r5, _080B375C  @ =gUnknown_03002B88
	ldrh r1, [r5]
	add r2, r2, #6
	add r0, r7, r2
	strh r1, [r0]
	ldr r5, _080B3760  @ =0x00000954
	add r3, r7, r5
	ldrh r1, [r3]
	sub r2, r2, #4
	add r0, r7, r2
	strh r1, [r0]
	add r5, r5, #6
	add r2, r7, r5
	ldrh r1, [r2]
	ldr r5, _080B3764  @ =0x00001AA2
	add r0, r7, r5
	strh r1, [r0]
	mov r0, r8
	strh r6, [r0]
	mov r1, r12
	strh r6, [r1]
	strh r6, [r3]
	strh r6, [r4]
	ldr r4, _080B375C  @ =gUnknown_03002B88
	strh r6, [r4]
	strh r6, [r2]
	mov r0, #66
	mov r1, #0
	bl sub_0812A324
	ldr r5, _080B3768  @ =0x00000A3C
	add r1, r7, r5
	ldr r0, _080B376C  @ =0x0000FFF2
	strh r0, [r1]
_080B372A:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080B3734:
	.4byte gRam
_080B3738:
	.4byte 0x0000099D
_080B373C:
	.4byte 0x00000A4C
_080B3740:
	.4byte 0x00000A5A
_080B3744:
	.4byte 0x0000173C
_080B3748:
	.4byte 0x00000A28
_080B374C:
	.4byte 0x00001AB4
_080B3750:
	.4byte 0x00001AB6
_080B3754:
	.4byte 0x00001A98
_080B3758:
	.4byte 0x00000956
_080B375C:
	.4byte gUnknown_03002B88
_080B3760:
	.4byte 0x00000954
_080B3764:
	.4byte 0x00001AA2
_080B3768:
	.4byte 0x00000A3C
_080B376C:
	.4byte 0x0000FFF2
	THUMB_FUNC_END sub_080B366C

