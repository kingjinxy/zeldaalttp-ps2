	THUMB_FUNC_START sub_080BB340
sub_080BB340: @ 0x080BB340
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	mov r7, #0
	mov r0, #0
	mov r10, r0
	mov r9, r0
	mov r1, #0
	str r1, [sp]
	ldr r1, _080BB394  @ =gRam
	ldr r2, _080BB398  @ =0x00000A02
	add r0, r1, r2
	ldrb r2, [r0]
	ldr r3, _080BB39C  @ =0x00000A03
	add r0, r1, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	mov r8, r2
	ldr r4, _080BB3A0  @ =0x00000A04
	add r0, r1, r4
	ldrb r2, [r0]
	ldr r5, _080BB3A4  @ =0x00000A05
	add r0, r1, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r4, r2, r0
	mov r6, #0
	mov r5, #0
	mov r12, r5
	ldr r2, _080BB3A8  @ =0x000009AD
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #39
	bls _080BB3AC
	bl sub_080BD42C
	b _080BB71A
	.byte 0x00
	.byte 0x00
_080BB394:
	.4byte gRam
_080BB398:
	.4byte 0x00000A02
_080BB39C:
	.4byte 0x00000A03
_080BB3A0:
	.4byte 0x00000A04
_080BB3A4:
	.4byte 0x00000A05
_080BB3A8:
	.4byte 0x000009AD
_080BB3AC:
	ldr r3, _080BB3C8  @ =gRam
	ldr r1, _080BB3CC  @ =0x0000098E
	add r0, r3, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #6
	bls _080BB3BE
	b _080BB55C
_080BB3BE:
	lsl r0, r0, #2
	ldr r1, _080BB3D0  @ =0x080BB3D4
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_080BB3C8:
	.4byte gRam
_080BB3CC:
	.4byte 0x0000098E
_080BB3D0:
	.4byte 0x080BB3D4
	.4byte _080BB3F0
	.4byte _080BB424
	.4byte _080BB45C
	.4byte _080BB494
	.4byte _080BB4C8
	.4byte _080BB500
	.4byte _080BB538
_080BB3F0:
	ldr r1, _080BB414  @ =gUnknown_08195F1C
	lsl r0, r4, #2
	add r0, r0, r1
	ldr r7, [r0]
	add r0, r4, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	mov r10, r0
	ldr r2, _080BB418  @ =gUnknown_08195F20
	mov r9, r2
	ldr r3, _080BB41C  @ =gUnknown_08195F24
	str r3, [sp]
	mov r6, #128
	ldr r0, _080BB420  @ =gUnknown_08195F28
	ldr r5, [r0]
	mov r0, #25
	b _080BB55A
_080BB414:
	.4byte gUnknown_08195F1C
_080BB418:
	.4byte gUnknown_08195F20
_080BB41C:
	.4byte gUnknown_08195F24
_080BB420:
	.4byte gUnknown_08195F28
_080BB424:
	ldr r1, _080BB44C  @ =gUnknown_08197320
	lsl r0, r4, #2
	add r0, r0, r1
	ldr r7, [r0]
	add r0, r4, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	mov r10, r0
	ldr r1, _080BB450  @ =gUnknown_08197940
	mov r9, r1
	ldr r2, _080BB454  @ =gUnknown_08197978
	str r2, [sp]
	mov r6, #0
	ldr r0, _080BB458  @ =gUnknown_081979A4
	ldr r5, [r0]
	mov r3, #25
	mov r12, r3
	b _080BB55C
	.byte 0x00
	.byte 0x00
_080BB44C:
	.4byte gUnknown_08197320
_080BB450:
	.4byte gUnknown_08197940
_080BB454:
	.4byte gUnknown_08197978
_080BB458:
	.4byte gUnknown_081979A4
_080BB45C:
	ldr r1, _080BB484  @ =gUnknown_081979A8
	lsl r0, r4, #2
	add r0, r0, r1
	ldr r7, [r0]
	add r0, r4, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	mov r10, r0
	ldr r5, _080BB488  @ =gUnknown_081979AC
	mov r9, r5
	ldr r0, _080BB48C  @ =gUnknown_081979B0
	str r0, [sp]
	mov r6, #0
	ldr r0, _080BB490  @ =gUnknown_081979B4
	ldr r5, [r0]
	mov r1, #25
	mov r12, r1
	b _080BB55C
	.byte 0x00
	.byte 0x00
_080BB484:
	.4byte gUnknown_081979A8
_080BB488:
	.4byte gUnknown_081979AC
_080BB48C:
	.4byte gUnknown_081979B0
_080BB490:
	.4byte gUnknown_081979B4
_080BB494:
	ldr r1, _080BB4B8  @ =gUnknown_08198BA4
	lsl r0, r4, #2
	add r0, r0, r1
	ldr r7, [r0]
	add r0, r4, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	mov r10, r0
	ldr r2, _080BB4BC  @ =gUnknown_08198BA8
	mov r9, r2
	ldr r3, _080BB4C0  @ =gUnknown_08198BAC
	str r3, [sp]
	mov r6, #32
	ldr r0, _080BB4C4  @ =gUnknown_08198BB0
	ldr r5, [r0]
	mov r0, #27
	b _080BB55A
_080BB4B8:
	.4byte gUnknown_08198BA4
_080BB4BC:
	.4byte gUnknown_08198BA8
_080BB4C0:
	.4byte gUnknown_08198BAC
_080BB4C4:
	.4byte gUnknown_08198BB0
_080BB4C8:
	ldr r1, _080BB4F0  @ =gUnknown_08198BC8
	lsl r0, r4, #2
	add r0, r0, r1
	ldr r7, [r0]
	add r0, r4, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	mov r10, r0
	ldr r1, _080BB4F4  @ =gUnknown_08198BCC
	mov r9, r1
	ldr r2, _080BB4F8  @ =gUnknown_08198BD0
	str r2, [sp]
	mov r6, #32
	ldr r0, _080BB4FC  @ =gUnknown_08198BD4
	ldr r5, [r0]
	mov r3, #27
	mov r12, r3
	b _080BB55C
	.byte 0x00
	.byte 0x00
_080BB4F0:
	.4byte gUnknown_08198BC8
_080BB4F4:
	.4byte gUnknown_08198BCC
_080BB4F8:
	.4byte gUnknown_08198BD0
_080BB4FC:
	.4byte gUnknown_08198BD4
_080BB500:
	ldr r1, _080BB528  @ =gUnknown_08198BEC
	lsl r0, r4, #2
	add r0, r0, r1
	ldr r7, [r0]
	add r0, r4, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	mov r10, r0
	ldr r5, _080BB52C  @ =gUnknown_08198BF0
	mov r9, r5
	ldr r0, _080BB530  @ =gUnknown_08198BF4
	str r0, [sp]
	mov r6, #32
	ldr r0, _080BB534  @ =gUnknown_08198BF8
	ldr r5, [r0]
	mov r1, #27
	mov r12, r1
	b _080BB55C
	.byte 0x00
	.byte 0x00
_080BB528:
	.4byte gUnknown_08198BEC
_080BB52C:
	.4byte gUnknown_08198BF0
_080BB530:
	.4byte gUnknown_08198BF4
_080BB534:
	.4byte gUnknown_08198BF8
_080BB538:
	ldr r1, _080BB574  @ =gUnknown_08198C10
	lsl r0, r4, #2
	add r0, r0, r1
	ldr r7, [r0]
	add r0, r4, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	mov r10, r0
	ldr r2, _080BB578  @ =gUnknown_08198C14
	mov r9, r2
	ldr r3, _080BB57C  @ =gUnknown_08198C18
	str r3, [sp]
	mov r6, #32
	ldr r0, _080BB580  @ =gUnknown_08198C1C
	ldr r5, [r0]
	mov r0, #26
_080BB55A:
	mov r12, r0
_080BB55C:
	cmp r4, #0
	bne _080BB588
	ldr r0, _080BB584  @ =gUnknown_02000400
	mov r2, #128
	lsl r2, r2, #8
	add r1, r2, #0
	strh r1, [r0, #2]
	mov r3, #160
	lsl r3, r3, #7
	add r1, r3, #0
	strh r1, [r0, #4]
	b _080BB5B4
_080BB574:
	.4byte gUnknown_08198C10
_080BB578:
	.4byte gUnknown_08198C14
_080BB57C:
	.4byte gUnknown_08198C18
_080BB580:
	.4byte gUnknown_08198C1C
_080BB584:
	.4byte gUnknown_02000400
_080BB588:
	ldr r3, _080BB72C  @ =gUnknown_02000400
	mov r0, #128
	lsl r0, r0, #3
	add r0, r0, r8
	lsl r0, r0, #1
	ldr r1, _080BB730  @ =0x000007FF
	add r2, r1, #0
	add r1, r0, #0
	and r1, r1, r2
	mov r2, #128
	lsl r2, r2, #4
	and r0, r0, r2
	lsl r0, r0, #1
	orr r1, r1, r0
	mov r2, #128
	lsl r2, r2, #8
	add r0, r2, #0
	add r1, r1, r0
	strh r1, [r3, #2]
	ldr r1, _080BB734  @ =0x00004020
	add r0, r1, #0
	strh r0, [r3, #4]
_080BB5B4:
	ldr r3, _080BB72C  @ =gUnknown_02000400
	strh r6, [r3, #6]
	mov r6, #4
	mov r2, r8
	add r2, r2, #32
	str r2, [sp, #4]
	cmp r4, r5
	bcc _080BB5C6
	b _080BB6F6
_080BB5C6:
	ldrh r1, [r7]
	ldr r0, _080BB738  @ =0x0000FFFF
	cmp r1, r0
	beq _080BB624
	add r0, r1, #0
	add r0, r0, r8
	mov r4, #128
	lsl r4, r4, #3
	add r0, r0, r4
	lsl r0, r0, #1
	ldr r5, _080BB730  @ =0x000007FF
	add r2, r5, #0
	add r1, r0, #0
	and r1, r1, r2
	mov r4, #128
	lsl r4, r4, #4
	add r2, r4, #0
	and r0, r0, r2
	lsl r0, r0, #1
	orr r1, r1, r0
	mov r5, #128
	lsl r5, r5, #8
	add r0, r5, #0
	add r1, r1, r0
	strh r1, [r3, #8]
	add r7, r7, #2
	ldrh r0, [r7]
	add r0, r0, #1
	asr r0, r0, #1
	strh r0, [r3, #10]
	ldrh r5, [r3, #10]
	mov r6, #6
	add r7, r7, #2
	add r5, r5, #6
	cmp r6, r5
	bge _080BB624
	add r1, r3, #0
	add r1, r1, #12
	sub r6, r5, #6
_080BB614:
	ldrh r0, [r7]
	strh r0, [r1]
	add r1, r1, #2
	sub r6, r6, #1
	add r7, r7, #2
	cmp r6, #0
	bne _080BB614
	add r6, r5, #0
_080BB624:
	ldr r0, _080BB73C  @ =gUnknown_03002C36
	ldrb r1, [r0]
	mov r4, #1
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080BB63E
	lsr r0, r1, #1
	lsl r0, r0, #2
	add r0, r0, r9
	ldr r0, [r0]
	cmp r10, r0
	bne _080BB6F6
_080BB63E:
	lsl r3, r6, #1
	ldr r1, _080BB72C  @ =gUnknown_02000400
	mov r9, r1
	add r3, r3, r9
	mov r0, #128
	lsl r0, r0, #3
	add r0, r0, r12
	add r0, r0, r8
	lsl r0, r0, #1
	ldr r5, _080BB730  @ =0x000007FF
	add r2, r5, #0
	add r1, r0, #0
	and r1, r1, r2
	add r5, r5, #1
	add r2, r5, #0
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
	add r0, r0, r9
	mov r1, #3
	strh r1, [r0]
	add r6, r6, #1
	ldr r1, _080BB740  @ =gUnknown_081717A4
	ldr r3, _080BB73C  @ =gUnknown_03002C36
	ldrb r2, [r3]
	lsr r0, r2, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	ldr r5, _080BB744  @ =gUnknown_020023CE
	add r0, r0, r5
	ldrh r5, [r0]
	add r0, r4, #0
	and r0, r0, r2
	mov r7, #0
	cmp r0, #0
	beq _080BB69A
	mov r7, #10
_080BB69A:
	lsl r4, r6, #1
	add r4, r4, r9
	add r0, r5, #0
	mov r1, #100
	bl __divsi3
	add r0, r0, r7
	lsl r0, r0, #1
	ldr r1, [sp]
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r4]
	add r6, r6, #1
	lsl r4, r6, #1
	add r4, r4, r9
	add r0, r5, #0
	mov r1, #10
	bl __divsi3
	mov r1, #10
	bl __modsi3
	add r0, r0, r7
	lsl r0, r0, #1
	ldr r2, [sp]
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r4]
	add r6, r6, #1
	lsl r4, r6, #1
	add r4, r4, r9
	add r0, r5, #0
	mov r1, #10
	bl __modsi3
	add r0, r0, r7
	lsl r0, r0, #1
	ldr r3, [sp]
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r4]
	add r6, r6, #1
	ldr r4, _080BB73C  @ =gUnknown_03002C36
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080BB6F6:
	lsl r0, r6, #1
	ldr r5, _080BB72C  @ =gUnknown_02000400
	add r0, r0, r5
	ldr r2, _080BB738  @ =0x0000FFFF
	add r1, r2, #0
	strh r1, [r0]
	ldr r3, [sp, #4]
	mov r8, r3
	ldr r4, _080BB748  @ =gRam
	ldr r5, _080BB74C  @ =0x00000A02
	add r0, r4, r5
	mov r1, r8
	strb r1, [r0]
	mov r2, r8
	lsr r1, r2, #8
	ldr r3, _080BB750  @ =0x00000A03
	add r0, r4, r3
	strb r1, [r0]
_080BB71A:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BB72C:
	.4byte gUnknown_02000400
_080BB730:
	.4byte 0x000007FF
_080BB734:
	.4byte 0x00004020
_080BB738:
	.4byte 0x0000FFFF
_080BB73C:
	.4byte gUnknown_03002C36
_080BB740:
	.4byte gUnknown_081717A4
_080BB744:
	.4byte gUnknown_020023CE
_080BB748:
	.4byte gRam
_080BB74C:
	.4byte 0x00000A02
_080BB750:
	.4byte 0x00000A03
	THUMB_FUNC_END sub_080BB340

