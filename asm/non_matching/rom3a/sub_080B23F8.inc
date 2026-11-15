	THUMB_FUNC_START sub_080B23F8
sub_080B23F8: @ 0x080B23F8
	push {r4-r7,lr}
	ldr r4, _080B25C8  @ =gRam
	ldr r1, _080B25CC  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _080B2450
	bl sub_080B2C34
	lsl r0, r0, #24
	cmp r0, #0
	beq _080B2450
	ldr r2, _080B25D0  @ =0x0000097C
	add r1, r4, r2
	ldrb r0, [r1]
	sub r0, r0, #4
	mov r2, #0
	strb r0, [r1]
	ldr r3, _080B25D4  @ =0x0000097D
	add r1, r4, r3
	ldrb r0, [r1]
	sub r0, r0, #4
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #176
	bls _080B2434
	strb r2, [r1]
_080B2434:
	ldr r1, _080B25D8  @ =0x00000979
	add r0, r4, r1
	strb r2, [r0]
	ldr r2, _080B25DC  @ =0x00000978
	add r1, r4, r2
	mov r0, #62
	strb r0, [r1]
	ldr r3, _080B25E0  @ =0x00000975
	add r1, r4, r3
	mov r0, #2
	strb r0, [r1]
	mov r0, #0
	bl sub_080B2E5C
_080B2450:
	ldr r0, _080B25C8  @ =gRam
	ldr r4, _080B25E4  @ =0x00001A4C
	add r1, r0, r4
	ldrh r6, [r1]
	ldr r2, _080B25E8  @ =0x00001A4E
	add r1, r0, r2
	ldrh r7, [r1]
	ldr r3, _080B25EC  @ =0x000009C6
	add r0, r0, r3
	ldrb r0, [r0]
	cmp r0, #63
	bhi _080B24F8
	mov r2, #15
	ldr r0, _080B25F0  @ =gUnknown_02010940
	ldrb r0, [r0, #15]
	cmp r0, #0
	bne _080B2482
	ldr r0, _080B25F4  @ =gUnknown_02010950
	ldrb r0, [r0, #15]
	cmp r0, #0
	bne _080B2482
	ldr r0, _080B25F8  @ =gUnknown_02010960
	ldrb r0, [r0, #15]
	cmp r0, #0
	beq _080B24F8
_080B2482:
	ldr r4, _080B25C8  @ =gRam
	ldr r0, _080B25CC  @ =0x00000996
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080B2498
	ldr r3, _080B25FC  @ =gUnknown_02010980
	add r1, r2, r3
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080B2498:
	ldr r1, _080B25F0  @ =gUnknown_02010940
	add r0, r2, r1
	ldrb r1, [r0]
	ldr r3, _080B25F4  @ =gUnknown_02010950
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080B25E8  @ =0x00001A4E
	add r0, r4, r3
	strh r1, [r0]
	ldr r1, _080B25F8  @ =gUnknown_02010960
	add r0, r2, r1
	ldrb r1, [r0]
	ldr r3, _080B2600  @ =gUnknown_02010970
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r2, _080B25E4  @ =0x00001A4C
	add r0, r4, r2
	strh r1, [r0]
	bl sub_080B2C34
	lsl r0, r0, #24
	cmp r0, #0
	beq _080B24F8
	ldr r3, _080B25D8  @ =0x00000979
	add r1, r4, r3
	mov r0, #202
	strb r0, [r1]
	ldrb r0, [r5]
	lsr r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	ldr r1, _080B2604  @ =gUnknown_0816EEB2
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r2, _080B25DC  @ =0x00000978
	add r0, r4, r2
	strb r1, [r0]
	sub r3, r3, #4
	add r1, r4, r3
	mov r0, #2
	strb r0, [r1]
	mov r0, #15
	bl sub_080B2E5C
_080B24F8:
	ldr r0, _080B2608  @ =gUnknown_020022DB
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _080B2506
	b _080B2C00
_080B2506:
	ldr r4, _080B25C8  @ =gRam
	mov r0, #179
	lsl r0, r0, #5
	add r5, r4, r0
	mov r0, #0
	ldrsb r0, [r5, r0]
	sub r0, r0, #6
	mvn r0, r0
	lsr r2, r0, #31
	ldr r1, _080B260C  @ =0x0000164C
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r2, r0
	beq _080B2524
	b _080B2C00
_080B2524:
	mov r0, #0
	bl sub_080B3418
	lsl r0, r0, #24
	cmp r0, #0
	beq _080B2532
	b _080B2648
_080B2532:
	mov r0, #0
	bl sub_080B3454
	lsl r0, r0, #24
	cmp r0, #0
	beq _080B2540
	b _080B2648
_080B2540:
	ldrb r2, [r5]
	ldr r0, _080B2610  @ =gUnknown_0816ED34
	lsl r2, r2, #1
	add r0, r2, r0
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _080B2648
	ldr r3, _080B25E8  @ =0x00001A4E
	add r0, r4, r3
	strh r1, [r0]
	ldr r0, _080B2614  @ =gUnknown_0816ED46
	add r0, r2, r0
	ldrh r1, [r0]
	sub r3, r3, #2
	add r0, r4, r3
	strh r1, [r0]
	ldr r0, _080B2618  @ =gUnknown_0816EE30
	add r0, r2, r0
	ldrh r0, [r0]
	mov r2, #255
	lsl r2, r2, #8
	and r2, r2, r0
	cmp r2, #0
	beq _080B2590
	mov r0, #196
	lsl r0, r0, #8
	cmp r2, r0
	beq _080B258C
	ldr r1, _080B25CC  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	bne _080B2648
_080B258C:
	bl sub_080B3490
_080B2590:
	bl sub_080B2C34
	lsl r0, r0, #24
	cmp r0, #0
	beq _080B2648
	ldr r3, _080B25C8  @ =gRam
	mov r2, #179
	lsl r2, r2, #5
	add r0, r3, r2
	ldrb r2, [r0]
	ldr r1, _080B2618  @ =gUnknown_0816EE30
	lsl r0, r2, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r2, #255
	lsl r2, r2, #8
	and r2, r2, r1
	cmp r2, #0
	beq _080B261C
	ldr r4, _080B25DC  @ =0x00000978
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080B25E0  @ =0x00000975
	add r1, r3, r0
	mov r0, #2
	strb r0, [r1]
	b _080B2642
	.byte 0x00
	.byte 0x00
_080B25C8:
	.4byte gRam
_080B25CC:
	.4byte 0x00000996
_080B25D0:
	.4byte 0x0000097C
_080B25D4:
	.4byte 0x0000097D
_080B25D8:
	.4byte 0x00000979
_080B25DC:
	.4byte 0x00000978
_080B25E0:
	.4byte 0x00000975
_080B25E4:
	.4byte 0x00001A4C
_080B25E8:
	.4byte 0x00001A4E
_080B25EC:
	.4byte 0x000009C6
_080B25F0:
	.4byte gUnknown_02010940
_080B25F4:
	.4byte gUnknown_02010950
_080B25F8:
	.4byte gUnknown_02010960
_080B25FC:
	.4byte gUnknown_02010980
_080B2600:
	.4byte gUnknown_02010970
_080B2604:
	.4byte gUnknown_0816EEB2
_080B2608:
	.4byte gUnknown_020022DB
_080B260C:
	.4byte 0x0000164C
_080B2610:
	.4byte gUnknown_0816ED34
_080B2614:
	.4byte gUnknown_0816ED46
_080B2618:
	.4byte gUnknown_0816EE30
_080B261C:
	ldr r1, _080B26F0  @ =0x00000996
	add r0, r3, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #3
	and r0, r0, r1
	ldr r1, _080B26F4  @ =gUnknown_0816EEAE
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r4, _080B26F8  @ =0x00000979
	add r0, r3, r4
	strb r1, [r0]
	ldr r0, _080B26FC  @ =0x00000978
	add r1, r3, r0
	mov r0, #50
	strb r0, [r1]
	ldr r1, _080B2700  @ =0x00000975
	add r0, r3, r1
	strb r2, [r0]
_080B2642:
	mov r0, #14
	bl sub_080B2E5C
_080B2648:
	mov r0, #1
	bl sub_080B3418
	lsl r0, r0, #24
	cmp r0, #0
	bne _080B2744
	mov r0, #1
	bl sub_080B3454
	lsl r0, r0, #24
	cmp r0, #0
	bne _080B2744
	ldr r3, _080B2704  @ =gRam
	mov r2, #179
	lsl r2, r2, #5
	add r0, r3, r2
	ldrb r2, [r0]
	ldr r0, _080B2708  @ =gUnknown_0816ED58
	lsl r2, r2, #1
	add r0, r2, r0
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _080B2744
	ldr r4, _080B270C  @ =0x00001A4E
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080B2710  @ =gUnknown_0816ED6A
	add r0, r2, r0
	ldrh r1, [r0]
	sub r4, r4, #2
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080B2714  @ =gUnknown_0816EE42
	add r0, r2, r0
	ldrh r0, [r0]
	mov r2, #255
	lsl r2, r2, #8
	and r2, r2, r0
	cmp r2, #0
	beq _080B26B8
	mov r0, #196
	lsl r0, r0, #8
	cmp r2, r0
	beq _080B26B4
	ldr r1, _080B26F0  @ =0x00000996
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	bne _080B2744
_080B26B4:
	bl sub_080B3490
_080B26B8:
	bl sub_080B2C34
	lsl r0, r0, #24
	cmp r0, #0
	beq _080B2744
	ldr r3, _080B2704  @ =gRam
	mov r2, #179
	lsl r2, r2, #5
	add r0, r3, r2
	ldrb r2, [r0]
	ldr r1, _080B2714  @ =gUnknown_0816EE42
	lsl r0, r2, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r2, #255
	lsl r2, r2, #8
	and r2, r2, r1
	cmp r2, #0
	beq _080B2718
	ldr r4, _080B26FC  @ =0x00000978
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080B2700  @ =0x00000975
	add r1, r3, r0
	mov r0, #2
	strb r0, [r1]
	b _080B273E
	.byte 0x00
	.byte 0x00
_080B26F0:
	.4byte 0x00000996
_080B26F4:
	.4byte gUnknown_0816EEAE
_080B26F8:
	.4byte 0x00000979
_080B26FC:
	.4byte 0x00000978
_080B2700:
	.4byte 0x00000975
_080B2704:
	.4byte gRam
_080B2708:
	.4byte gUnknown_0816ED58
_080B270C:
	.4byte 0x00001A4E
_080B2710:
	.4byte gUnknown_0816ED6A
_080B2714:
	.4byte gUnknown_0816EE42
_080B2718:
	ldr r1, _080B27EC  @ =0x00000996
	add r0, r3, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #3
	and r0, r0, r1
	ldr r1, _080B27F0  @ =gUnknown_0816EEAE
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r4, _080B27F4  @ =0x00000979
	add r0, r3, r4
	strb r1, [r0]
	ldr r0, _080B27F8  @ =0x00000978
	add r1, r3, r0
	mov r0, #50
	strb r0, [r1]
	ldr r1, _080B27FC  @ =0x00000975
	add r0, r3, r1
	strb r2, [r0]
_080B273E:
	mov r0, #13
	bl sub_080B2E5C
_080B2744:
	mov r0, #2
	bl sub_080B3418
	lsl r0, r0, #24
	cmp r0, #0
	bne _080B2840
	mov r0, #2
	bl sub_080B3454
	lsl r0, r0, #24
	cmp r0, #0
	bne _080B2840
	ldr r3, _080B2800  @ =gRam
	mov r2, #179
	lsl r2, r2, #5
	add r0, r3, r2
	ldrb r2, [r0]
	ldr r0, _080B2804  @ =gUnknown_0816ED7C
	lsl r2, r2, #1
	add r0, r2, r0
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _080B2840
	ldr r4, _080B2808  @ =0x00001A4E
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080B280C  @ =gUnknown_0816ED8E
	add r0, r2, r0
	ldrh r1, [r0]
	sub r4, r4, #2
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080B2810  @ =gUnknown_0816EE54
	add r0, r2, r0
	ldrh r0, [r0]
	mov r2, #255
	lsl r2, r2, #8
	and r2, r2, r0
	cmp r2, #0
	beq _080B27B4
	mov r0, #196
	lsl r0, r0, #8
	cmp r2, r0
	beq _080B27B0
	ldr r1, _080B27EC  @ =0x00000996
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	bne _080B2840
_080B27B0:
	bl sub_080B3490
_080B27B4:
	bl sub_080B2C34
	lsl r0, r0, #24
	cmp r0, #0
	beq _080B2840
	ldr r3, _080B2800  @ =gRam
	mov r2, #179
	lsl r2, r2, #5
	add r0, r3, r2
	ldrb r2, [r0]
	ldr r1, _080B2810  @ =gUnknown_0816EE54
	lsl r0, r2, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r2, #255
	lsl r2, r2, #8
	and r2, r2, r1
	cmp r2, #0
	beq _080B2814
	ldr r4, _080B27F8  @ =0x00000978
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080B27FC  @ =0x00000975
	add r1, r3, r0
	mov r0, #2
	strb r0, [r1]
	b _080B283A
	.byte 0x00
	.byte 0x00
_080B27EC:
	.4byte 0x00000996
_080B27F0:
	.4byte gUnknown_0816EEAE
_080B27F4:
	.4byte 0x00000979
_080B27F8:
	.4byte 0x00000978
_080B27FC:
	.4byte 0x00000975
_080B2800:
	.4byte gRam
_080B2804:
	.4byte gUnknown_0816ED7C
_080B2808:
	.4byte 0x00001A4E
_080B280C:
	.4byte gUnknown_0816ED8E
_080B2810:
	.4byte gUnknown_0816EE54
_080B2814:
	ldr r1, _080B28DC  @ =0x00000996
	add r0, r3, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #3
	and r0, r0, r1
	ldr r1, _080B28E0  @ =gUnknown_0816EEAE
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r4, _080B28E4  @ =0x00000979
	add r0, r3, r4
	strb r1, [r0]
	ldr r0, _080B28E8  @ =0x00000978
	add r1, r3, r0
	mov r0, #50
	strb r0, [r1]
	ldr r1, _080B28EC  @ =0x00000975
	add r0, r3, r1
	strb r2, [r0]
_080B283A:
	mov r0, #12
	bl sub_080B2E5C
_080B2840:
	mov r0, #3
	bl sub_080B3454
	lsl r0, r0, #24
	cmp r0, #0
	bne _080B2930
	ldr r3, _080B28F0  @ =gRam
	mov r2, #179
	lsl r2, r2, #5
	add r0, r3, r2
	ldrb r2, [r0]
	ldr r0, _080B28F4  @ =gUnknown_0816EDA0
	lsl r2, r2, #1
	add r0, r2, r0
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _080B2930
	ldr r4, _080B28F8  @ =0x00001A4E
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080B28FC  @ =gUnknown_0816EDB2
	add r0, r2, r0
	ldrh r1, [r0]
	sub r4, r4, #2
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080B2900  @ =gUnknown_0816EE66
	add r0, r2, r0
	ldrh r0, [r0]
	mov r2, #255
	lsl r2, r2, #8
	and r2, r2, r0
	cmp r2, #0
	beq _080B28A4
	mov r0, #196
	lsl r0, r0, #8
	cmp r2, r0
	beq _080B28A0
	ldr r1, _080B28DC  @ =0x00000996
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	bne _080B2930
_080B28A0:
	bl sub_080B3490
_080B28A4:
	bl sub_080B2C34
	lsl r0, r0, #24
	cmp r0, #0
	beq _080B2930
	ldr r3, _080B28F0  @ =gRam
	mov r2, #179
	lsl r2, r2, #5
	add r0, r3, r2
	ldrb r2, [r0]
	ldr r1, _080B2900  @ =gUnknown_0816EE66
	lsl r0, r2, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r2, #255
	lsl r2, r2, #8
	and r2, r2, r1
	cmp r2, #0
	beq _080B2904
	ldr r4, _080B28E8  @ =0x00000978
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080B28EC  @ =0x00000975
	add r1, r3, r0
	mov r0, #2
	strb r0, [r1]
	b _080B292A
	.byte 0x00
	.byte 0x00
_080B28DC:
	.4byte 0x00000996
_080B28E0:
	.4byte gUnknown_0816EEAE
_080B28E4:
	.4byte 0x00000979
_080B28E8:
	.4byte 0x00000978
_080B28EC:
	.4byte 0x00000975
_080B28F0:
	.4byte gRam
_080B28F4:
	.4byte gUnknown_0816EDA0
_080B28F8:
	.4byte 0x00001A4E
_080B28FC:
	.4byte gUnknown_0816EDB2
_080B2900:
	.4byte gUnknown_0816EE66
_080B2904:
	ldr r1, _080B29CC  @ =0x00000996
	add r0, r3, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #3
	and r0, r0, r1
	ldr r1, _080B29D0  @ =gUnknown_0816EEAE
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r4, _080B29D4  @ =0x00000979
	add r0, r3, r4
	strb r1, [r0]
	ldr r0, _080B29D8  @ =0x00000978
	add r1, r3, r0
	mov r0, #50
	strb r0, [r1]
	ldr r1, _080B29DC  @ =0x00000975
	add r0, r3, r1
	strb r2, [r0]
_080B292A:
	mov r0, #11
	bl sub_080B2E5C
_080B2930:
	mov r0, #4
	bl sub_080B3454
	lsl r0, r0, #24
	cmp r0, #0
	bne _080B2A20
	ldr r3, _080B29E0  @ =gRam
	mov r2, #179
	lsl r2, r2, #5
	add r0, r3, r2
	ldrb r2, [r0]
	ldr r0, _080B29E4  @ =gUnknown_0816EDC4
	lsl r2, r2, #1
	add r0, r2, r0
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _080B2A20
	ldr r4, _080B29E8  @ =0x00001A4E
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080B29EC  @ =gUnknown_0816EDD6
	add r0, r2, r0
	ldrh r1, [r0]
	sub r4, r4, #2
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080B29F0  @ =gUnknown_0816EE78
	add r0, r2, r0
	ldrh r0, [r0]
	mov r2, #255
	lsl r2, r2, #8
	and r2, r2, r0
	cmp r2, #0
	beq _080B2994
	mov r0, #196
	lsl r0, r0, #8
	cmp r2, r0
	beq _080B2990
	ldr r1, _080B29CC  @ =0x00000996
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	bne _080B2A20
_080B2990:
	bl sub_080B3490
_080B2994:
	bl sub_080B2C34
	lsl r0, r0, #24
	cmp r0, #0
	beq _080B2A20
	ldr r3, _080B29E0  @ =gRam
	mov r2, #179
	lsl r2, r2, #5
	add r0, r3, r2
	ldrb r2, [r0]
	ldr r1, _080B29F0  @ =gUnknown_0816EE78
	lsl r0, r2, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r2, #255
	lsl r2, r2, #8
	and r2, r2, r1
	cmp r2, #0
	beq _080B29F4
	ldr r4, _080B29D8  @ =0x00000978
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080B29DC  @ =0x00000975
	add r1, r3, r0
	mov r0, #2
	strb r0, [r1]
	b _080B2A1A
	.byte 0x00
	.byte 0x00
_080B29CC:
	.4byte 0x00000996
_080B29D0:
	.4byte gUnknown_0816EEAE
_080B29D4:
	.4byte 0x00000979
_080B29D8:
	.4byte 0x00000978
_080B29DC:
	.4byte 0x00000975
_080B29E0:
	.4byte gRam
_080B29E4:
	.4byte gUnknown_0816EDC4
_080B29E8:
	.4byte 0x00001A4E
_080B29EC:
	.4byte gUnknown_0816EDD6
_080B29F0:
	.4byte gUnknown_0816EE78
_080B29F4:
	ldr r1, _080B2ABC  @ =0x00000996
	add r0, r3, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #3
	and r0, r0, r1
	ldr r1, _080B2AC0  @ =gUnknown_0816EEAE
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r4, _080B2AC4  @ =0x00000979
	add r0, r3, r4
	strb r1, [r0]
	ldr r0, _080B2AC8  @ =0x00000978
	add r1, r3, r0
	mov r0, #50
	strb r0, [r1]
	ldr r1, _080B2ACC  @ =0x00000975
	add r0, r3, r1
	strb r2, [r0]
_080B2A1A:
	mov r0, #10
	bl sub_080B2E5C
_080B2A20:
	mov r0, #5
	bl sub_080B3454
	lsl r0, r0, #24
	cmp r0, #0
	bne _080B2B10
	ldr r3, _080B2AD0  @ =gRam
	mov r2, #179
	lsl r2, r2, #5
	add r0, r3, r2
	ldrb r2, [r0]
	ldr r0, _080B2AD4  @ =gUnknown_0816EDE8
	lsl r2, r2, #1
	add r0, r2, r0
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _080B2B10
	ldr r4, _080B2AD8  @ =0x00001A4E
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080B2ADC  @ =gUnknown_0816EDFA
	add r0, r2, r0
	ldrh r1, [r0]
	sub r4, r4, #2
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080B2AE0  @ =gUnknown_0816EE8A
	add r0, r2, r0
	ldrh r0, [r0]
	mov r2, #255
	lsl r2, r2, #8
	and r2, r2, r0
	cmp r2, #0
	beq _080B2A84
	mov r0, #196
	lsl r0, r0, #8
	cmp r2, r0
	beq _080B2A80
	ldr r1, _080B2ABC  @ =0x00000996
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	bne _080B2B10
_080B2A80:
	bl sub_080B3490
_080B2A84:
	bl sub_080B2C34
	lsl r0, r0, #24
	cmp r0, #0
	beq _080B2B10
	ldr r3, _080B2AD0  @ =gRam
	mov r2, #179
	lsl r2, r2, #5
	add r0, r3, r2
	ldrb r2, [r0]
	ldr r1, _080B2AE0  @ =gUnknown_0816EE8A
	lsl r0, r2, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r2, #255
	lsl r2, r2, #8
	and r2, r2, r1
	cmp r2, #0
	beq _080B2AE4
	ldr r4, _080B2AC8  @ =0x00000978
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080B2ACC  @ =0x00000975
	add r1, r3, r0
	mov r0, #2
	strb r0, [r1]
	b _080B2B0A
	.byte 0x00
	.byte 0x00
_080B2ABC:
	.4byte 0x00000996
_080B2AC0:
	.4byte gUnknown_0816EEAE
_080B2AC4:
	.4byte 0x00000979
_080B2AC8:
	.4byte 0x00000978
_080B2ACC:
	.4byte 0x00000975
_080B2AD0:
	.4byte gRam
_080B2AD4:
	.4byte gUnknown_0816EDE8
_080B2AD8:
	.4byte 0x00001A4E
_080B2ADC:
	.4byte gUnknown_0816EDFA
_080B2AE0:
	.4byte gUnknown_0816EE8A
_080B2AE4:
	ldr r1, _080B2BAC  @ =0x00000996
	add r0, r3, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #3
	and r0, r0, r1
	ldr r1, _080B2BB0  @ =gUnknown_0816EEAE
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r4, _080B2BB4  @ =0x00000979
	add r0, r3, r4
	strb r1, [r0]
	ldr r0, _080B2BB8  @ =0x00000978
	add r1, r3, r0
	mov r0, #50
	strb r0, [r1]
	ldr r1, _080B2BBC  @ =0x00000975
	add r0, r3, r1
	strb r2, [r0]
_080B2B0A:
	mov r0, #9
	bl sub_080B2E5C
_080B2B10:
	mov r0, #6
	bl sub_080B3454
	lsl r0, r0, #24
	cmp r0, #0
	bne _080B2C00
	ldr r3, _080B2BC0  @ =gRam
	mov r2, #179
	lsl r2, r2, #5
	add r0, r3, r2
	ldrb r2, [r0]
	ldr r0, _080B2BC4  @ =gUnknown_0816EE0C
	lsl r2, r2, #1
	add r0, r2, r0
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _080B2C00
	ldr r4, _080B2BC8  @ =0x00001A4E
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080B2BCC  @ =gUnknown_0816EE1E
	add r0, r2, r0
	ldrh r1, [r0]
	sub r4, r4, #2
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080B2BD0  @ =gUnknown_0816EE9C
	add r0, r2, r0
	ldrh r0, [r0]
	mov r2, #255
	lsl r2, r2, #8
	and r2, r2, r0
	cmp r2, #0
	beq _080B2B74
	mov r0, #196
	lsl r0, r0, #8
	cmp r2, r0
	beq _080B2B70
	ldr r1, _080B2BAC  @ =0x00000996
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	bne _080B2C00
_080B2B70:
	bl sub_080B3490
_080B2B74:
	bl sub_080B2C34
	lsl r0, r0, #24
	cmp r0, #0
	beq _080B2C00
	ldr r3, _080B2BC0  @ =gRam
	mov r2, #179
	lsl r2, r2, #5
	add r0, r3, r2
	ldrb r2, [r0]
	ldr r1, _080B2BD0  @ =gUnknown_0816EE9C
	lsl r0, r2, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r2, #255
	lsl r2, r2, #8
	and r2, r2, r1
	cmp r2, #0
	beq _080B2BD4
	ldr r4, _080B2BB8  @ =0x00000978
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080B2BBC  @ =0x00000975
	add r1, r3, r0
	mov r0, #2
	strb r0, [r1]
	b _080B2BFA
	.byte 0x00
	.byte 0x00
_080B2BAC:
	.4byte 0x00000996
_080B2BB0:
	.4byte gUnknown_0816EEAE
_080B2BB4:
	.4byte 0x00000979
_080B2BB8:
	.4byte 0x00000978
_080B2BBC:
	.4byte 0x00000975
_080B2BC0:
	.4byte gRam
_080B2BC4:
	.4byte gUnknown_0816EE0C
_080B2BC8:
	.4byte 0x00001A4E
_080B2BCC:
	.4byte gUnknown_0816EE1E
_080B2BD0:
	.4byte gUnknown_0816EE9C
_080B2BD4:
	ldr r1, _080B2C14  @ =0x00000996
	add r0, r3, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #3
	and r0, r0, r1
	ldr r1, _080B2C18  @ =gUnknown_0816EEAE
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r4, _080B2C1C  @ =0x00000979
	add r0, r3, r4
	strb r1, [r0]
	ldr r0, _080B2C20  @ =0x00000978
	add r1, r3, r0
	mov r0, #50
	strb r0, [r1]
	ldr r1, _080B2C24  @ =0x00000975
	add r0, r3, r1
	strb r2, [r0]
_080B2BFA:
	mov r0, #8
	bl sub_080B2E5C
_080B2C00:
	ldr r0, _080B2C28  @ =gRam
	ldr r2, _080B2C2C  @ =0x00001A4C
	add r1, r0, r2
	strh r6, [r1]
	ldr r3, _080B2C30  @ =0x00001A4E
	add r0, r0, r3
	strh r7, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
_080B2C14:
	.4byte 0x00000996
_080B2C18:
	.4byte gUnknown_0816EEAE
_080B2C1C:
	.4byte 0x00000979
_080B2C20:
	.4byte 0x00000978
_080B2C24:
	.4byte 0x00000975
_080B2C28:
	.4byte gRam
_080B2C2C:
	.4byte 0x00001A4C
_080B2C30:
	.4byte 0x00001A4E
	THUMB_FUNC_END sub_080B23F8

