	THUMB_FUNC_START sub_080962D0
sub_080962D0: @ 0x080962D0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	ldr r1, _08096308  @ =gRam
	ldr r2, _0809630C  @ =0x000016D7
	add r0, r1, r2
	mov r3, #0
	ldrsb r3, [r0, r3]
	mov r8, r1
	cmp r3, #0
	bne _080962EC
	bl _08096B38
_080962EC:
	ldr r0, _08096310  @ =0x0000172C
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #2
	bne _08096318
	mov r6, #4
	ldr r0, _08096314  @ =0x000016C4
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _08096320
	b _0809631E
_08096308:
	.4byte gRam
_0809630C:
	.4byte 0x000016D7
_08096310:
	.4byte 0x0000172C
_08096314:
	.4byte 0x000016C4
_08096318:
	mov r6, #4
	cmp r3, #0
	blt _08096320
_0809631E:
	mov r6, #6
_08096320:
	lsr r1, r6, #1
	ldr r0, _08096344  @ =0x00001726
	add r0, r0, r8
	strb r1, [r0]
	add r0, r6, #0
	bl sub_0809EB58
	ldr r0, _08096348  @ =0x000009B2
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _0809634C
	bl sub_08095AD4
	bl _08096B38
_08096344:
	.4byte 0x00001726
_08096348:
	.4byte 0x000009B2
_0809634C:
	ldr r0, _08096374  @ =0x00001791
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _08096364
	ldr r0, _08096378  @ =0x000016F8
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	beq _08096380
_08096364:
	ldr r2, _0809637C  @ =0x0000097C
	add r2, r2, r8
	ldrb r1, [r2]
	lsl r0, r1, #24
	asr r0, r0, #28
	orr r0, r0, r1
	strb r0, [r2]
	b _08096508
_08096374:
	.4byte 0x00001791
_08096378:
	.4byte 0x000016F8
_0809637C:
	.4byte 0x0000097C
_08096380:
	ldr r2, _080963E8  @ =0x0000172A
	add r2, r2, r8
	ldrb r1, [r2]
	cmp r1, #0
	bne _08096390
	ldr r0, _080963EC  @ =0x00001712
	add r0, r0, r8
	strb r1, [r0]
_08096390:
	ldr r0, _080963F0  @ =0x0000172C
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #1
	bne _08096404
	ldrb r0, [r2]
	cmp r0, #0
	bne _08096404
	ldr r0, _080963F4  @ =0x00000B14
	add r0, r0, r8
	ldrh r0, [r0]
	cmp r0, #3
	bne _080963B8
	mov r0, #161
	lsl r0, r0, #4
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	beq _080963B8
	b _0809653A
_080963B8:
	ldr r2, _080963F8  @ =0x000016C4
	add r2, r2, r8
	ldrh r1, [r2]
	mov r3, #7
	and r3, r3, r1
	ldr r0, _080963FC  @ =0x000016D7
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080963D4
	ldr r0, _08096400  @ =0x0000FFF8
	orr r3, r3, r0
_080963D4:
	neg r0, r3
	lsl r0, r0, #16
	lsr r3, r0, #16
	add r0, r3, r1
	strh r0, [r2]
	bl sub_080961E0
	bl sub_0809FB1C
	b _08096B38
_080963E8:
	.4byte 0x0000172A
_080963EC:
	.4byte 0x00001712
_080963F0:
	.4byte 0x0000172C
_080963F4:
	.4byte 0x00000B14
_080963F8:
	.4byte 0x000016C4
_080963FC:
	.4byte 0x000016D7
_08096400:
	.4byte 0x0000FFF8
_08096404:
	ldr r2, _08096478  @ =gRam
	ldr r3, _0809647C  @ =0x0000097C
	add r0, r2, r3
	ldrb r1, [r0]
	mov r0, #112
	and r0, r0, r1
	mov r8, r2
	cmp r0, #0
	beq _08096508
	ldr r1, _08096480  @ =0x00000969
	add r1, r1, r8
	mov r0, #0
	strb r0, [r1]
	ldr r0, _08096484  @ =0x0000097D
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _0809644A
	mov r6, #2
	ldr r0, _08096488  @ =0x000016D7
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _0809643E
	mov r6, #3
_0809643E:
	ldr r0, _0809648C  @ =gUnknown_08167D4E
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r0, _08096490  @ =0x000016FC
	add r0, r0, r8
	strh r1, [r0]
_0809644A:
	ldr r5, _08096494  @ =0x0000172C
	add r5, r5, r8
	mov r3, #0
	mov r0, #2
	strb r0, [r5]
	ldr r0, _08096498  @ =0x0000188A
	add r0, r0, r8
	strb r3, [r0]
	ldr r0, _0809647C  @ =0x0000097C
	add r0, r0, r8
	ldrb r2, [r0]
	mov r1, #112
	and r1, r1, r2
	cmp r1, #112
	beq _080964E0
	mov r4, #7
	add r0, r4, #0
	and r0, r0, r2
	cmp r0, #0
	bne _0809649C
	cmp r1, #0
	bne _080964E0
	b _08096508
_08096478:
	.4byte gRam
_0809647C:
	.4byte 0x0000097C
_08096480:
	.4byte 0x00000969
_08096484:
	.4byte 0x0000097D
_08096488:
	.4byte 0x000016D7
_0809648C:
	.4byte gUnknown_08167D4E
_08096490:
	.4byte 0x000016FC
_08096494:
	.4byte 0x0000172C
_08096498:
	.4byte 0x0000188A
_0809649C:
	ldr r0, _080964D0  @ =0x0000172B
	add r0, r0, r8
	strb r3, [r0]
	strb r3, [r5]
	ldr r2, _080964D4  @ =0x000016C4
	add r2, r2, r8
	ldrh r1, [r2]
	add r3, r4, #0
	and r3, r3, r1
	ldr r0, _080964D8  @ =0x000016D7
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080964C0
	ldr r0, _080964DC  @ =0x0000FFF8
	orr r3, r3, r0
_080964C0:
	neg r0, r3
	lsl r0, r0, #16
	lsr r3, r0, #16
	add r0, r3, r1
	strh r0, [r2]
	bl sub_08096150
	b _08096B38
_080964D0:
	.4byte 0x0000172B
_080964D4:
	.4byte 0x000016C4
_080964D8:
	.4byte 0x000016D7
_080964DC:
	.4byte 0x0000FFF8
_080964E0:
	ldr r0, _08096500  @ =0x0000179F
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _080964F0
	b _08096B38
_080964F0:
	ldr r2, _08096504  @ =0x00001705
	add r2, r2, r8
	ldrb r1, [r2]
	mov r0, #253
	and r0, r0, r1
	strb r0, [r2]
	b _08096B38
	.byte 0x00
	.byte 0x00
_08096500:
	.4byte 0x0000179F
_08096504:
	.4byte 0x00001705
_08096508:
	ldr r4, _080965A8  @ =gRam
	ldr r1, _080965AC  @ =0x0000179F
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	bne _0809653A
	ldr r0, _080965B0  @ =0x00001705
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #253
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080965B4  @ =0x0000172C
	add r0, r4, r1
	strb r3, [r0]
	ldr r2, _080965B8  @ =0x00000A11
	add r0, r4, r2
	strb r3, [r0]
	sub r1, r1, #48
	add r0, r4, r1
	strh r3, [r0]
_0809653A:
	ldr r4, _080965A8  @ =gRam
	ldr r2, _080965BC  @ =0x0000097C
	add r0, r4, r2
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #24
	asr r2, r0, #24
	cmp r2, #0
	bne _08096576
	ldr r3, _080965C0  @ =0x00000978
	add r0, r4, r3
	ldrb r1, [r0]
	mov r0, #5
	and r0, r0, r1
	cmp r0, #0
	beq _08096576
	ldr r1, _080965C4  @ =0x0000188A
	add r0, r4, r1
	strb r2, [r0]
	bl sub_08093CF8
	ldr r2, _080965C8  @ =0x0000172B
	add r0, r4, r2
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	beq _08096576
	b _08096B38
_08096576:
	ldr r2, _080965A8  @ =gRam
	ldr r3, _080965C8  @ =0x0000172B
	add r1, r2, r3
	mov r3, #0
	mov r0, #0
	strb r0, [r1]
	mov r1, #161
	lsl r1, r1, #4
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08096608
	ldr r1, _080965CC  @ =0x000017DC
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _080965D4
	ldr r3, _080965D0  @ =0x000017AE
	add r0, r2, r3
	ldrb r1, [r0]
	mov r2, #1
	b _0809661E
	.byte 0x00
	.byte 0x00
_080965A8:
	.4byte gRam
_080965AC:
	.4byte 0x0000179F
_080965B0:
	.4byte 0x00001705
_080965B4:
	.4byte 0x0000172C
_080965B8:
	.4byte 0x00000A11
_080965BC:
	.4byte 0x0000097C
_080965C0:
	.4byte 0x00000978
_080965C4:
	.4byte 0x0000188A
_080965C8:
	.4byte 0x0000172B
_080965CC:
	.4byte 0x000017DC
_080965D0:
	.4byte 0x000017AE
_080965D4:
	ldr r1, _080965FC  @ =0x00001774
	add r0, r2, r1
	ldrh r0, [r0]
	lsr r0, r0, #8
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	bne _08096638
	ldr r3, _08096600  @ =0x0000097C
	add r0, r2, r3
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _08096638
	ldr r0, _08096604  @ =0x000017AE
	add r2, r2, r0
	ldrb r1, [r2]
	mov r0, #254
	b _08096634
_080965FC:
	.4byte 0x00001774
_08096600:
	.4byte 0x0000097C
_08096604:
	.4byte 0x000017AE
_08096608:
	ldr r1, _08096624  @ =0x000017AC
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _0809662C
	ldr r3, _08096628  @ =0x000017AE
	add r0, r2, r3
	ldrb r1, [r0]
	mov r2, #2
_0809661E:
	orr r1, r1, r2
	strb r1, [r0]
	b _08096638
_08096624:
	.4byte 0x000017AC
_08096628:
	.4byte 0x000017AE
_0809662C:
	ldr r0, _08096664  @ =0x000017AE
	add r2, r2, r0
	ldrb r1, [r2]
	mov r0, #253
_08096634:
	and r0, r0, r1
	strb r0, [r2]
_08096638:
	ldr r3, _08096668  @ =gRam
	ldr r1, _0809666C  @ =0x00001784
	add r0, r3, r1
	ldrh r0, [r0]
	lsr r2, r0, #8
	mov r1, #34
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080966C6
	mov r0, #32
	and r2, r2, r0
	lsl r0, r2, #16
	lsr r2, r0, #16
	cmp r2, #0
	beq _08096670
	mov r2, #150
	lsl r2, r2, #4
	add r1, r3, r2
	mov r0, #8
	strh r0, [r1]
	b _08096678
_08096664:
	.4byte 0x000017AE
_08096668:
	.4byte gRam
_0809666C:
	.4byte 0x00001784
_08096670:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	strh r2, [r0]
_08096678:
	mov r0, #5
	bl sub_080AA83C
	ldr r2, _080966EC  @ =gRam
	mov r0, #182
	lsl r0, r0, #5
	add r3, r2, r0
	ldr r1, _080966F0  @ =gUnknown_08167D52
	add r0, r0, #102
	add r4, r2, r0
	ldrb r0, [r4]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r3, [r3]
	add r0, r0, r3
	mov r1, #150
	lsl r1, r1, #4
	add r3, r2, r1
	ldrh r1, [r3]
	sub r0, r0, r1
	strh r0, [r3]
	ldr r0, _080966F4  @ =0x000016C4
	add r3, r2, r0
	ldr r1, _080966F8  @ =gUnknown_08167D5A
	ldrb r0, [r4]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r3, [r3]
	add r0, r0, r3
	ldr r1, _080966FC  @ =0x00000964
	add r2, r2, r1
	strh r0, [r2]
	bl sub_08087F84
	mov r0, #116
	bl sub_0809E49C
_080966C6:
	mov r6, #1
	ldr r3, _080966EC  @ =gRam
	ldr r2, _08096700  @ =0x00001888
	add r0, r3, r2
	ldrh r1, [r0]
	mov r0, #34
	and r0, r0, r1
	cmp r0, #0
	beq _08096708
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _080966E2
	mov r6, #2
_080966E2:
	ldr r1, _08096704  @ =0x0000188A
	add r0, r3, r1
	strb r6, [r0]
	b _08096758
	.byte 0x00
	.byte 0x00
_080966EC:
	.4byte gRam
_080966F0:
	.4byte gUnknown_08167D52
_080966F4:
	.4byte 0x000016C4
_080966F8:
	.4byte gUnknown_08167D5A
_080966FC:
	.4byte 0x00000964
_08096700:
	.4byte 0x00001888
_08096704:
	.4byte 0x0000188A
_08096708:
	mov r6, #3
	lsl r0, r1, #16
	lsr r2, r0, #24
	add r0, r2, #0
	mov r1, #34
	and r0, r0, r1
	cmp r0, #0
	beq _08096730
	mov r0, #32
	and r2, r2, r0
	cmp r2, #0
	beq _08096722
	mov r6, #4
_08096722:
	ldr r2, _0809672C  @ =0x0000188A
	add r0, r3, r2
	strb r6, [r0]
	b _08096758
	.byte 0x00
	.byte 0x00
_0809672C:
	.4byte 0x0000188A
_08096730:
	ldr r1, _0809678C  @ =0x00001774
	add r0, r3, r1
	ldrh r0, [r0]
	lsr r0, r0, #8
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	bne _08096758
	ldr r2, _08096790  @ =0x0000097C
	add r0, r3, r2
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #24
	asr r1, r0, #24
	cmp r1, #0
	bne _08096758
	ldr r2, _08096794  @ =0x0000188A
	add r0, r3, r2
	strb r1, [r0]
_08096758:
	ldr r4, _08096798  @ =gRam
	mov r3, #192
	lsl r3, r3, #5
	add r0, r4, r3
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #7
	bne _080967A4
	bl sub_0809A5BC
	lsl r0, r0, #24
	cmp r0, #0
	beq _080967A4
	bl sub_08093078
	ldr r0, _0809679C  @ =0x00000B22
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r2, _080967A0  @ =0x00001702
	add r1, r4, r2
	mov r0, #2
	strb r0, [r1]
	b _0809684E
_0809678C:
	.4byte 0x00001774
_08096790:
	.4byte 0x0000097C
_08096794:
	.4byte 0x0000188A
_08096798:
	.4byte gRam
_0809679C:
	.4byte 0x00000B22
_080967A0:
	.4byte 0x00001702
_080967A4:
	ldr r4, _080967F8  @ =gRam
	ldr r3, _080967FC  @ =0x000017D0
	add r0, r4, r3
	ldrh r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #7
	bne _0809687C
	ldr r0, _08096800  @ =0x000017D4
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _0809687C
	ldr r1, _08096804  @ =0x00001718
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #6
	beq _0809687C
	mov r2, #182
	lsl r2, r2, #5
	add r0, r4, r2
	ldrh r1, [r0]
	sub r3, r3, #228
	add r0, r4, r3
	mov r5, #0
	strh r1, [r0]
	ldr r1, _08096808  @ =0x000016C4
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #48
	add r0, r4, r2
	strh r1, [r0]
	bl sub_08093078
	ldr r3, _0809680C  @ =0x000009B5
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _08096810
	bl sub_0808B1A8
	b _0809684E
_080967F8:
	.4byte gRam
_080967FC:
	.4byte 0x000017D0
_08096800:
	.4byte 0x000017D4
_08096804:
	.4byte 0x00001718
_08096808:
	.4byte 0x000016C4
_0809680C:
	.4byte 0x000009B5
_08096810:
	mov r0, #1
	strb r0, [r6]
	ldr r1, _08096864  @ =0x000016CC
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _08096868  @ =0x000017CE
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _0809686C  @ =0x00001791
	add r0, r4, r3
	strb r5, [r0]
	ldr r1, _08096870  @ =0x00001792
	add r0, r4, r1
	strb r5, [r0]
	add r2, r2, #58
	add r0, r4, r2
	strb r5, [r0]
	sub r3, r3, #120
	add r0, r4, r3
	strb r5, [r0]
	sub r1, r1, #66
	add r0, r4, r1
	strb r5, [r0]
	sub r2, r2, #41
	add r0, r4, r2
	strb r5, [r0]
	add r3, r3, #157
	add r0, r4, r3
	strb r5, [r0]
	bl sub_08092B0C
_0809684E:
	ldr r0, _08096874  @ =gRam
	ldr r1, _08096878  @ =0x0000180D
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	bl sub_0809A670
	mov r0, #4
	bl sub_0809E43C
	b _080968EC
_08096864:
	.4byte 0x000016CC
_08096868:
	.4byte 0x000017CE
_0809686C:
	.4byte 0x00001791
_08096870:
	.4byte 0x00001792
_08096874:
	.4byte gRam
_08096878:
	.4byte 0x0000180D
_0809687C:
	ldr r4, _080968AC  @ =gRam
	ldr r2, _080968B0  @ =0x000017D2
	add r0, r4, r2
	ldrh r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #7
	bne _080968EC
	ldr r3, _080968B4  @ =0x000017D4
	add r6, r4, r3
	ldrb r0, [r6]
	cmp r0, #0
	beq _080968EC
	ldr r0, _080968B8  @ =0x00001702
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080968C0
	ldr r2, _080968BC  @ =0x0000097C
	add r1, r4, r2
	mov r0, #7
	strb r0, [r1]
	b _080968EC
	.byte 0x00
	.byte 0x00
_080968AC:
	.4byte gRam
_080968B0:
	.4byte 0x000017D2
_080968B4:
	.4byte 0x000017D4
_080968B8:
	.4byte 0x00001702
_080968BC:
	.4byte 0x0000097C
_080968C0:
	bl sub_08093078
	ldrb r2, [r5]
	cmp r2, #0
	bne _080968EC
	ldr r3, _0809693C  @ =0x000017CE
	add r0, r4, r3
	ldrb r1, [r0]
	ldr r3, _08096940  @ =0x000016CC
	add r0, r4, r3
	strb r1, [r0]
	strb r2, [r6]
	mov r0, #0
	mov r1, #21
	bl sub_080AD1EC
	ldr r0, _08096944  @ =0x0000180D
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	bl sub_0809A670
_080968EC:
	ldr r2, _08096948  @ =gRam
	ldr r1, _0809694C  @ =0x00001714
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #5
	and r0, r0, r1
	mov r8, r2
	cmp r0, #0
	beq _08096964
	ldr r0, _08096950  @ =0x0000097C
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #24
	asr r2, r0, #24
	cmp r2, #0
	bne _08096964
	ldr r3, _08096954  @ =0x00001718
	add r3, r3, r8
	ldrb r0, [r3]
	cmp r0, #5
	bne _0809691C
	b _08096B38
_0809691C:
	cmp r0, #2
	bne _08096922
	b _08096B38
_08096922:
	ldr r1, _08096958  @ =0x00001717
	add r1, r1, r8
	mov r0, #9
	strb r0, [r1]
	ldr r0, _0809695C  @ =0x00001715
	add r0, r0, r8
	strb r2, [r0]
	ldr r1, _08096960  @ =0x00001716
	add r1, r1, r8
	mov r0, #1
	strb r0, [r1]
	strb r0, [r3]
	b _08096B38
_0809693C:
	.4byte 0x000017CE
_08096940:
	.4byte 0x000016CC
_08096944:
	.4byte 0x0000180D
_08096948:
	.4byte gRam
_0809694C:
	.4byte 0x00001714
_08096950:
	.4byte 0x0000097C
_08096954:
	.4byte 0x00001718
_08096958:
	.4byte 0x00001717
_0809695C:
	.4byte 0x00001715
_08096960:
	.4byte 0x00001716
_08096964:
	ldr r1, _080969B0  @ =0x00001716
	add r1, r1, r8
	mov r0, #0
	strb r0, [r1]
	ldr r0, _080969B4  @ =0x00001774
	add r0, r0, r8
	ldrh r0, [r0]
	lsr r0, r0, #8
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	beq _08096A28
	ldr r0, _080969B8  @ =0x000016F8
	add r0, r0, r8
	ldr r1, _080969BC  @ =0x000017AA
	add r1, r1, r8
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r1, _080969C0  @ =0x00001710
	add r1, r1, r8
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	bne _08096A12
	ldr r0, _080969C4  @ =0x00001726
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #2
	bne _080969CC
	ldr r0, _080969C8  @ =0x000016C4
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	bne _08096A28
	b _080969DA
_080969B0:
	.4byte 0x00001716
_080969B4:
	.4byte 0x00001774
_080969B8:
	.4byte 0x000016F8
_080969BC:
	.4byte 0x000017AA
_080969C0:
	.4byte 0x00001710
_080969C4:
	.4byte 0x00001726
_080969C8:
	.4byte 0x000016C4
_080969CC:
	ldr r0, _08096B44  @ =0x000016C4
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _08096A28
_080969DA:
	ldr r0, _08096B48  @ =0x000017AA
	add r0, r0, r8
	ldrb r3, [r0]
	cmp r3, #0
	bne _08096A28
	ldr r1, _08096B4C  @ =gUnknown_08167D62
	ldr r0, _08096B50  @ =gArmor
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r0, _08096B54  @ =0x00001805
	add r0, r0, r8
	strb r1, [r0]
	ldr r1, _08096B58  @ =0x0000176E
	add r1, r1, r8
	mov r0, #32
	strb r0, [r1]
	ldr r0, _08096B5C  @ =0x0000180D
	add r0, r0, r8
	strb r3, [r0]
	ldr r0, _08096B60  @ =0x00001710
	add r0, r0, r8
	strb r3, [r0]
	ldr r0, _08096B64  @ =0x000017F1
	add r0, r0, r8
	strb r3, [r0]
	bl sub_08099324
_08096A12:
	ldr r2, _08096B68  @ =gRam
	ldr r3, _08096B6C  @ =0x00001774
	add r0, r2, r3
	ldrh r0, [r0]
	lsr r0, r0, #8
	mov r1, #7
	and r0, r0, r1
	ldr r3, _08096B70  @ =0x0000097C
	add r1, r2, r3
	strb r0, [r1]
	mov r8, r2
_08096A28:
	ldr r0, _08096B74  @ =0x00000B14
	add r0, r0, r8
	ldrh r0, [r0]
	cmp r0, #0
	beq _08096A42
	cmp r0, #4
	beq _08096A42
	mov r0, #161
	lsl r0, r0, #4
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	bne _08096B18
_08096A42:
	ldr r2, _08096B78  @ =0x0000171C
	add r2, r2, r8
	ldrb r1, [r2]
	ldr r0, _08096B7C  @ =0x0000171D
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	orr r0, r0, r1
	cmp r0, #0
	beq _08096B0A
	ldr r0, _08096B80  @ =0x0000172A
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	bne _08096B0A
	ldr r0, _08096B84  @ =0x00001747
	add r0, r0, r8
	strb r1, [r0]
	mov r1, #185
	lsl r1, r1, #5
	add r1, r1, r8
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08096B18
	mov r6, #15
	ldrh r7, [r2]
	mov r5, sp
	ldr r0, _08096B88  @ =0x00001726
	add r8, r8, r0
_08096A84:
	mov r2, #128
	lsl r2, r2, #8
	add r1, r2, #0
	add r0, r7, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08096AFC
	mov r0, sp
	add r1, r6, #0
	bl sub_080B0184
	lsl r0, r0, #24
	cmp r0, #0
	bne _08096AFC
	ldr r4, _08096B68  @ =gRam
	ldrb r1, [r5]
	ldr r3, _08096B70  @ =0x0000097C
	add r0, r4, r3
	strb r1, [r0]
	add r0, r6, #0
	bl sub_080AF654
	lsl r0, r0, #24
	cmp r0, #0
	bne _08096AFC
	ldrb r0, [r5]
	bl sub_080AFF7C
	ldr r0, _08096B8C  @ =0x00001A48
	add r1, r4, r0
	ldrb r2, [r5]
	add r1, r1, r2
	mov r3, r8
	ldrb r0, [r3]
	lsl r0, r0, #1
	strb r0, [r1]
	ldrb r0, [r3]
	lsl r0, r0, #1
	ldr r2, _08096B90  @ =0x00000B1C
	add r1, r4, r2
	strh r0, [r1]
	ldrb r3, [r5]
	ldr r1, _08096B94  @ =0x00001A3E
	add r0, r4, r1
	add r0, r3, r0
	ldrb r2, [r0]
	mov r1, r8
	ldrb r0, [r1]
	cmp r0, #2
	beq _08096AEE
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
_08096AEE:
	mov r0, #210
	lsl r0, r0, #5
	add r1, r4, r0
	add r1, r3, r1
	mov r0, #15
	and r2, r2, r0
	strb r2, [r1]
_08096AFC:
	sub r1, r6, #1
	lsl r1, r1, #24
	lsl r0, r7, #17
	lsr r7, r0, #16
	lsr r6, r1, #24
	cmp r1, #0
	bge _08096A84
_08096B0A:
	ldr r2, _08096B68  @ =gRam
	mov r3, #185
	lsl r3, r3, #5
	add r1, r2, r3
	mov r0, #21
	strb r0, [r1]
	mov r8, r2
_08096B18:
	ldr r0, _08096B80  @ =0x0000172A
	add r0, r0, r8
	ldrb r3, [r0]
	cmp r3, #0
	bne _08096B34
	ldr r0, _08096B98  @ =0x00001712
	add r0, r0, r8
	strb r3, [r0]
	ldr r1, _08096B9C  @ =0x00001719
	add r1, r1, r8
	ldrb r0, [r1]
	cmp r0, #2
	bne _08096B34
	strb r3, [r1]
_08096B34:
	bl sub_08096BA0
_08096B38:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08096B44:
	.4byte 0x000016C4
_08096B48:
	.4byte 0x000017AA
_08096B4C:
	.4byte gUnknown_08167D62
_08096B50:
	.4byte gArmor
_08096B54:
	.4byte 0x00001805
_08096B58:
	.4byte 0x0000176E
_08096B5C:
	.4byte 0x0000180D
_08096B60:
	.4byte 0x00001710
_08096B64:
	.4byte 0x000017F1
_08096B68:
	.4byte gRam
_08096B6C:
	.4byte 0x00001774
_08096B70:
	.4byte 0x0000097C
_08096B74:
	.4byte 0x00000B14
_08096B78:
	.4byte 0x0000171C
_08096B7C:
	.4byte 0x0000171D
_08096B80:
	.4byte 0x0000172A
_08096B84:
	.4byte 0x00001747
_08096B88:
	.4byte 0x00001726
_08096B8C:
	.4byte 0x00001A48
_08096B90:
	.4byte 0x00000B1C
_08096B94:
	.4byte 0x00001A3E
_08096B98:
	.4byte 0x00001712
_08096B9C:
	.4byte 0x00001719
	THUMB_FUNC_END sub_080962D0

