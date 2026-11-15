	THUMB_FUNC_START sub_080BD42C
sub_080BD42C: @ 0x080BD42C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	mov r0, #0
	mov r9, r0
	ldr r4, _080BD4A4  @ =gRam
	ldr r1, _080BD4A8  @ =0x00000A02
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _080BD4AC  @ =0x00000A03
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r8, r1
	ldr r5, _080BD4B0  @ =0x00000A04
	add r0, r4, r5
	ldrb r1, [r0]
	ldr r7, _080BD4B4  @ =0x00000A05
	add r0, r4, r7
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r5, r1, r0
	mov r6, #0
	ldr r1, _080BD4B8  @ =0x00000CAA
	add r0, r4, r1
	mov r2, r9
	strb r2, [r0]
	bl sub_08130384
	sub r7, r7, #119
	add r4, r4, r7
	mov r0, #0
	ldrsb r0, [r4, r0]
	cmp r0, #0
	beq _080BD482
	cmp r0, #0
	blt _080BD482
	cmp r0, #2
	ble _080BD4CC
_080BD482:
	ldr r1, _080BD4BC  @ =gUnknown_08195F30
	lsl r0, r5, #2
	add r0, r0, r1
	ldr r4, [r0]
	add r0, r5, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	mov r10, r0
	ldr r0, _080BD4C0  @ =gUnknown_08195F34
	str r0, [sp]
	ldr r1, _080BD4C4  @ =gUnknown_08195F24
	mov r9, r1
	mov r6, #128
	ldr r0, _080BD4C8  @ =gUnknown_08195F38
	b _080BD4E8
	.byte 0x00
	.byte 0x00
_080BD4A4:
	.4byte gRam
_080BD4A8:
	.4byte 0x00000A02
_080BD4AC:
	.4byte 0x00000A03
_080BD4B0:
	.4byte 0x00000A04
_080BD4B4:
	.4byte 0x00000A05
_080BD4B8:
	.4byte 0x00000CAA
_080BD4BC:
	.4byte gUnknown_08195F30
_080BD4C0:
	.4byte gUnknown_08195F34
_080BD4C4:
	.4byte gUnknown_08195F24
_080BD4C8:
	.4byte gUnknown_08195F38
_080BD4CC:
	ldr r1, _080BD504  @ =gUnknown_0819872C
	lsl r0, r5, #2
	add r0, r0, r1
	ldr r4, [r0]
	add r0, r5, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	mov r10, r0
	ldr r2, _080BD508  @ =gUnknown_08198B18
	str r2, [sp]
	ldr r7, _080BD50C  @ =gUnknown_08197978
	mov r9, r7
	ldr r0, _080BD510  @ =gUnknown_08198B9C
_080BD4E8:
	ldr r0, [r0]
	str r0, [sp, #8]
	cmp r5, #0
	bne _080BD518
	ldr r0, _080BD514  @ =gUnknown_02000400
	mov r2, #128
	lsl r2, r2, #8
	add r1, r2, #0
	strh r1, [r0, #2]
	mov r7, #160
	lsl r7, r7, #7
	add r1, r7, #0
	strh r1, [r0, #4]
	b _080BD546
_080BD504:
	.4byte gUnknown_0819872C
_080BD508:
	.4byte gUnknown_08198B18
_080BD50C:
	.4byte gUnknown_08197978
_080BD510:
	.4byte gUnknown_08198B9C
_080BD514:
	.4byte gUnknown_02000400
_080BD518:
	ldr r3, _080BD700  @ =gUnknown_02000400
	mov r0, #128
	lsl r0, r0, #3
	add r0, r0, r8
	lsl r0, r0, #1
	ldr r1, _080BD704  @ =0x000007FF
	add r2, r1, #0
	add r1, r0, #0
	and r1, r1, r2
	mov r7, #128
	lsl r7, r7, #4
	add r2, r7, #0
	and r0, r0, r2
	lsl r0, r0, #1
	orr r1, r1, r0
	mov r2, #128
	lsl r2, r2, #8
	add r0, r2, #0
	add r1, r1, r0
	strh r1, [r3, #2]
	ldr r7, _080BD708  @ =0x00004020
	add r0, r7, #0
	strh r0, [r3, #4]
_080BD546:
	ldr r3, _080BD700  @ =gUnknown_02000400
	strh r6, [r3, #6]
	mov r6, #4
	ldr r0, _080BD70C  @ =gRam
	mov r12, r0
	mov r1, r8
	add r1, r1, #32
	str r1, [sp, #4]
	ldr r2, [sp, #8]
	cmp r5, r2
	bcc _080BD55E
	b _080BD7D6
_080BD55E:
	ldrh r1, [r4]
	ldr r0, _080BD710  @ =0x0000FFFF
	cmp r1, r0
	beq _080BD5B8
	add r0, r1, #0
	add r0, r0, r8
	mov r5, #128
	lsl r5, r5, #3
	add r0, r0, r5
	lsl r0, r0, #1
	ldr r7, _080BD704  @ =0x000007FF
	add r2, r7, #0
	add r1, r0, #0
	and r1, r1, r2
	mov r5, #128
	lsl r5, r5, #4
	add r2, r5, #0
	and r0, r0, r2
	lsl r0, r0, #1
	orr r1, r1, r0
	mov r7, #128
	lsl r7, r7, #8
	add r0, r7, #0
	add r1, r1, r0
	strh r1, [r3, #8]
	add r4, r4, #2
	ldrh r0, [r4]
	add r0, r0, #1
	asr r0, r0, #1
	strh r0, [r3, #10]
	ldrh r7, [r3, #10]
	mov r6, #6
	add r4, r4, #2
	add r7, r7, #6
	cmp r6, r7
	bcs _080BD5B8
	add r1, r3, #0
	add r1, r1, #12
_080BD5AA:
	ldrh r0, [r4]
	strh r0, [r1]
	add r1, r1, #2
	add r6, r6, #1
	add r4, r4, #2
	cmp r6, r7
	bcc _080BD5AA
_080BD5B8:
	ldr r0, _080BD714  @ =gUnknown_03002C36
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080BD5D4
	lsr r0, r1, #1
	lsl r0, r0, #2
	ldr r2, [sp]
	add r0, r0, r2
	ldr r0, [r0]
	cmp r10, r0
	beq _080BD5D4
	b _080BD7D6
_080BD5D4:
	lsr r0, r1, #1
	bl sub_080BEA70
	add r7, r0, #0
	ldr r4, _080BD714  @ =gUnknown_03002C36
	ldrb r1, [r4]
	mov r0, #1
	and r0, r0, r1
	mov r5, #0
	mov r10, r5
	cmp r0, #0
	beq _080BD5F0
	mov r0, #10
	mov r10, r0
_080BD5F0:
	lsr r0, r1, #1
	cmp r0, #32
	beq _080BD5F8
	b _080BD724
_080BD5F8:
	lsl r3, r6, #1
	ldr r5, _080BD700  @ =gUnknown_02000400
	add r3, r3, r5
	ldr r0, _080BD718  @ =0x00000415
	add r0, r0, r8
	lsl r0, r0, #1
	ldr r1, _080BD704  @ =0x000007FF
	add r2, r1, #0
	add r1, r0, #0
	and r1, r1, r2
	mov r4, #128
	lsl r4, r4, #4
	add r2, r4, #0
	and r0, r0, r2
	lsl r0, r0, #1
	orr r1, r1, r0
	mov r2, #128
	lsl r2, r2, #8
	add r0, r2, #0
	add r1, r1, r0
	strh r1, [r3]
	add r6, r6, #1
	lsl r0, r6, #1
	add r0, r0, r5
	mov r1, #9
	strh r1, [r0]
	add r6, r6, #1
	lsl r4, r6, #1
	add r4, r4, r5
	ldr r1, _080BD71C  @ =0x00057E40
	add r0, r7, #0
	bl __udivsi3
	add r0, r0, r10
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r4]
	add r6, r6, #1
	lsl r4, r6, #1
	add r4, r4, r5
	ldr r1, _080BD720  @ =0x00008CA0
	add r0, r7, #0
	bl __udivsi3
	mov r1, #10
	bl __umodsi3
	add r0, r0, r10
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r4]
	add r6, r6, #1
	lsl r4, r6, #1
	add r4, r4, r5
	mov r1, #225
	lsl r1, r1, #4
	add r0, r7, #0
	bl __udivsi3
	mov r1, #10
	bl __umodsi3
	add r0, r0, r10
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r4]
	add r6, r6, #1
	lsl r1, r6, #1
	add r1, r1, r5
	ldr r4, _080BD714  @ =gUnknown_03002C36
	ldrb r2, [r4]
	mov r0, #1
	and r0, r0, r2
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0, #40]
	strh r0, [r1]
	add r6, r6, #1
	lsl r4, r6, #1
	add r4, r4, r5
	mov r1, #150
	lsl r1, r1, #2
	add r0, r7, #0
	bl __udivsi3
	mov r1, #6
	bl __umodsi3
	add r0, r0, r10
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r4]
	add r6, r6, #1
	lsl r4, r6, #1
	add r4, r4, r5
	add r0, r7, #0
	mov r1, #60
	bl __udivsi3
	mov r1, #10
	bl __umodsi3
	add r0, r0, r10
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r4]
	add r6, r6, #1
	lsl r1, r6, #1
	add r1, r1, r5
	ldr r0, _080BD714  @ =gUnknown_03002C36
	ldrb r2, [r0]
	mov r0, #1
	and r0, r0, r2
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0, #40]
	strh r0, [r1]
	add r6, r6, #1
	lsl r4, r6, #1
	add r4, r4, r5
	add r0, r7, #0
	mov r1, #10
	bl __udivsi3
	mov r1, #6
	b _080BD7A0
	.byte 0x00
	.byte 0x00
_080BD700:
	.4byte gUnknown_02000400
_080BD704:
	.4byte 0x000007FF
_080BD708:
	.4byte 0x00004020
_080BD70C:
	.4byte gRam
_080BD710:
	.4byte 0x0000FFFF
_080BD714:
	.4byte gUnknown_03002C36
_080BD718:
	.4byte 0x00000415
_080BD71C:
	.4byte 0x00057E40
_080BD720:
	.4byte 0x00008CA0
_080BD724:
	lsl r3, r6, #1
	ldr r5, _080BD808  @ =gUnknown_02000400
	add r3, r3, r5
	ldr r0, _080BD80C  @ =0x0000041A
	add r0, r0, r8
	lsl r0, r0, #1
	ldr r1, _080BD810  @ =0x000007FF
	add r2, r1, #0
	add r1, r0, #0
	and r1, r1, r2
	mov r4, #128
	lsl r4, r4, #4
	add r2, r4, #0
	and r0, r0, r2
	lsl r0, r0, #1
	orr r1, r1, r0
	mov r2, #128
	lsl r2, r2, #8
	add r0, r2, #0
	add r1, r1, r0
	strh r1, [r3]
	add r6, r6, #1
	lsl r0, r6, #1
	add r0, r0, r5
	mov r1, #4
	strh r1, [r0]
	add r6, r6, #1
	lsl r4, r6, #1
	add r4, r4, r5
	mov r1, #250
	lsl r1, r1, #2
	add r0, r7, #0
	bl __udivsi3
	add r0, r0, r10
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r4]
	add r6, r6, #1
	lsl r4, r6, #1
	add r4, r4, r5
	add r0, r7, #0
	mov r1, #100
	bl __udivsi3
	mov r1, #10
	bl __umodsi3
	add r0, r0, r10
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r4]
	add r6, r6, #1
	lsl r4, r6, #1
	add r4, r4, r5
	add r0, r7, #0
	mov r1, #10
	bl __udivsi3
	mov r1, #10
_080BD7A0:
	bl __umodsi3
	add r0, r0, r10
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r4]
	add r6, r6, #1
	lsl r4, r6, #1
	add r4, r4, r5
	add r0, r7, #0
	mov r1, #10
	bl __umodsi3
	add r0, r0, r10
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r4]
	add r6, r6, #1
	ldr r2, _080BD814  @ =gRam
	ldr r4, _080BD818  @ =0x00000A06
	add r1, r2, r4
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r12, r2
_080BD7D6:
	lsl r0, r6, #1
	ldr r5, _080BD808  @ =gUnknown_02000400
	add r0, r0, r5
	ldr r7, _080BD81C  @ =0x0000FFFF
	add r1, r7, #0
	strh r1, [r0]
	ldr r0, [sp, #4]
	mov r8, r0
	ldr r0, _080BD820  @ =0x00000A02
	add r0, r0, r12
	mov r1, r8
	strb r1, [r0]
	mov r2, r8
	lsr r1, r2, #8
	ldr r0, _080BD824  @ =0x00000A03
	add r0, r0, r12
	strb r1, [r0]
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080BD808:
	.4byte gUnknown_02000400
_080BD80C:
	.4byte 0x0000041A
_080BD810:
	.4byte 0x000007FF
_080BD814:
	.4byte gRam
_080BD818:
	.4byte 0x00000A06
_080BD81C:
	.4byte 0x0000FFFF
_080BD820:
	.4byte 0x00000A02
_080BD824:
	.4byte 0x00000A03
	THUMB_FUNC_END sub_080BD42C

