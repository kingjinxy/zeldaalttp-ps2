	THUMB_FUNC_START sub_08068410
sub_08068410: @ 0x08068410
	push {r4-r6,lr}
	ldr r4, _0806852C  @ =gRam
	ldr r1, _08068530  @ =0x0000098C
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08068422
	bl sub_0812A798
_08068422:
	ldr r2, _08068534  @ =0x00000984
	add r5, r4, r2
	ldrb r0, [r5]
	cmp r0, #0
	beq _08068434
	bl sub_0812A90C
	mov r0, #0
	strb r0, [r5]
_08068434:
	ldr r3, _08068538  @ =0x00000997
	add r1, r4, r3
	ldrb r0, [r1]
	cmp r0, #0
	beq _08068440
	b _08068B18
_08068440:
	mov r0, #1
	strb r0, [r1]
	ldr r5, _0806853C  @ =0x00000996
	add r1, r4, r5
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _08068540  @ =0x000009AC
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #26
	beq _08068462
	ldr r2, _08068544  @ =0x000009A8
	add r1, r4, r2
	ldr r0, [r1]
	add r0, r0, #1
	str r0, [r1]
_08068462:
	ldr r3, _08068548  @ =0x000009A3
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #1
	bne _080684B4
	ldr r0, _0806854C  @ =gUnknown_02001600
	ldr r1, _08068550  @ =gUnknown_02001400
	mov r2, #128
	bl CpuFastSet
	ldr r5, _08068554  @ =0x00000983
	add r1, r4, r5
	ldrb r0, [r1]
	cmp r0, #0
	beq _080684AC
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080684AC
	ldr r0, _08068558  @ =0x0000050E
	add r2, r4, r0
	ldrh r1, [r2]
	ldr r0, _0806855C  @ =0x0000FFEF
	and r0, r0, r1
	mov r3, #0
	strh r0, [r2]
	mov r1, #162
	lsl r1, r1, #3
	add r2, r4, r1
	ldrh r1, [r2]
	ldr r0, _08068560  @ =0x0000FFFD
	and r0, r0, r1
	strh r0, [r2]
	ldr r2, _08068564  @ =0x00000982
	add r0, r4, r2
	strb r3, [r0]
_080684AC:
	bl sub_0806930C
	bl sub_080A7020
_080684B4:
	ldr r4, _08068568  @ =gUnknown_03002780
	mov r1, #224
	lsl r1, r1, #19
	mov r6, #128
	lsl r6, r6, #2
	add r0, r4, #0
	add r2, r6, #0
	bl CpuSet
	ldr r1, _0806856C  @ =gUnknown_03003E6C
	mov r0, #0
	strb r0, [r1]
	ldr r3, _08068570  @ =0x0000044B
	add r5, r4, r3
	ldrb r0, [r5]
	cmp r0, #0
	beq _080684E6
	ldr r0, _08068574  @ =gUnknown_02000C00
	mov r1, #160
	lsl r1, r1, #19
	add r2, r6, #0
	bl CpuSet
	mov r0, #0
	strb r0, [r5]
_080684E6:
	ldr r5, _08068578  @ =0x00000453
	add r0, r4, r5
	ldrb r0, [r0]
	cmp r0, #1
	beq _080684F2
	b _080689C8
_080684F2:
	mov r1, #157
	lsl r1, r1, #3
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _08068502
	bl sub_080A6EC4
_08068502:
	ldr r2, _0806857C  @ =0x000004EC
	add r3, r4, r2
	ldrh r2, [r3]
	add r1, r2, #0
	ldr r0, _08068580  @ =0x0000FFFF
	cmp r1, r0
	beq _080685C6
	ldr r5, _08068584  @ =0x0000FFF1
	cmp r1, r5
	bhi _0806851C
	ldr r1, _08068588  @ =0x000004F2
	add r0, r4, r1
	strh r2, [r0]
_0806851C:
	ldrh r1, [r3]
	ldr r0, _0806858C  @ =0x0000FFF0
	cmp r1, r0
	bhi _08068590
	add r0, r1, #0
	bl sub_0812A044
	b _080685BC
_0806852C:
	.4byte gRam
_08068530:
	.4byte 0x0000098C
_08068534:
	.4byte 0x00000984
_08068538:
	.4byte 0x00000997
_0806853C:
	.4byte 0x00000996
_08068540:
	.4byte 0x000009AC
_08068544:
	.4byte 0x000009A8
_08068548:
	.4byte 0x000009A3
_0806854C:
	.4byte gUnknown_02001600
_08068550:
	.4byte gUnknown_02001400
_08068554:
	.4byte 0x00000983
_08068558:
	.4byte 0x0000050E
_0806855C:
	.4byte 0x0000FFEF
_08068560:
	.4byte 0x0000FFFD
_08068564:
	.4byte 0x00000982
_08068568:
	.4byte gUnknown_03002780
_0806856C:
	.4byte gUnknown_03003E6C
_08068570:
	.4byte 0x0000044B
_08068574:
	.4byte gUnknown_02000C00
_08068578:
	.4byte 0x00000453
_0806857C:
	.4byte 0x000004EC
_08068580:
	.4byte 0x0000FFFF
_08068584:
	.4byte 0x0000FFF1
_08068588:
	.4byte 0x000004F2
_0806858C:
	.4byte 0x0000FFF0
_08068590:
	cmp r1, r5
	bne _0806859C
	mov r0, #40
	bl sub_0812A0A0
	b _080685BC
_0806859C:
	ldr r0, _080685AC  @ =0x0000FFF2
	cmp r1, r0
	bne _080685B0
	mov r0, #1
	bl sub_0812A10C
	b _080685BC
	.byte 0x00
	.byte 0x00
_080685AC:
	.4byte 0x0000FFF2
_080685B0:
	ldr r0, _080685FC  @ =0x0000FFF3
	cmp r1, r0
	bne _080685BC
	mov r0, #0
	bl sub_0812A10C
_080685BC:
	ldr r0, _08068600  @ =gRam
	ldr r2, _08068604  @ =0x00000A3C
	add r0, r0, r2
	ldr r1, _08068608  @ =0x0000FFFF
	strh r1, [r0]
_080685C6:
	ldr r3, _08068600  @ =gRam
	ldr r5, _0806860C  @ =0x00000A3E
	add r4, r3, r5
	ldrb r0, [r4]
	add r1, r0, #0
	cmp r1, #255
	beq _08068614
	add r5, r5, #6
	add r2, r3, r5
	ldrb r5, [r2]
	cmp r1, r5
	beq _080685EC
	strb r0, [r2]
	ldr r1, _08068610  @ =0x00000A45
	add r0, r3, r1
	ldrb r1, [r0]
	mov r2, #1
	eor r1, r1, r2
	strb r1, [r0]
_080685EC:
	ldr r2, _08068610  @ =0x00000A45
	add r0, r3, r2
	ldrb r0, [r0]
	ldrb r1, [r4]
	mov r2, #0
	bl sub_0812A4F8
	b _08068624
_080685FC:
	.4byte 0x0000FFF3
_08068600:
	.4byte gRam
_08068604:
	.4byte 0x00000A3C
_08068608:
	.4byte 0x0000FFFF
_0806860C:
	.4byte 0x00000A3E
_08068610:
	.4byte 0x00000A45
_08068614:
	mov r2, #255
	orr r0, r0, r2
	strb r0, [r4]
	ldr r4, _0806867C  @ =0x00000A44
	add r1, r3, r4
	ldrb r0, [r1]
	orr r0, r0, r2
	strb r0, [r1]
_08068624:
	ldr r2, _08068680  @ =gRam
	mov r5, #162
	lsl r5, r5, #3
	add r0, r2, r5
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	add r5, r2, #0
	cmp r0, #0
	beq _080686A0
	ldr r2, _08068684  @ =0x04000010
	ldr r1, _08068688  @ =0x00000954
	add r0, r5, r1
	ldrh r1, [r0]
	strh r1, [r2]
	ldr r0, _0806868C  @ =0x04000012
	strh r1, [r0]
	ldr r1, _08068690  @ =0x04000014
	mov r2, #149
	lsl r2, r2, #4
	add r0, r5, r2
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r3, _08068694  @ =0x00000956
	add r0, r5, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r4, _08068698  @ =0x00000952
	add r0, r5, r4
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r2, r2, #8
	add r0, r5, r2
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r0, _0806869C  @ =0x0400001C
	mov r1, #0
	strh r1, [r0]
	add r0, r0, #2
	strh r1, [r0]
	b _080689E6
_0806867C:
	.4byte 0x00000A44
_08068680:
	.4byte gRam
_08068684:
	.4byte 0x04000010
_08068688:
	.4byte 0x00000954
_0806868C:
	.4byte 0x04000012
_08068690:
	.4byte 0x04000014
_08068694:
	.4byte 0x00000956
_08068698:
	.4byte 0x00000952
_0806869C:
	.4byte 0x0400001C
_080686A0:
	ldr r3, _0806871C  @ =0x000009AC
	add r2, r5, r3
	ldrb r1, [r2]
	sub r0, r1, #6
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bls _080686C0
	ldr r4, _08068720  @ =0x000009B2
	add r0, r5, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080686C0
	b _080687E0
_080686C0:
	ldrh r1, [r2]
	ldr r0, _08068724  @ =0x0000030E
	cmp r1, r0
	bne _08068744
	ldr r1, _08068728  @ =0x00000A4C
	add r0, r5, r1
	ldrh r0, [r0]
	sub r0, r0, #3
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #5
	bhi _08068744
	ldr r1, _0806872C  @ =0x04000010
	ldr r2, _08068730  @ =0x00000952
	add r0, r5, r2
	ldrh r3, [r0]
	strh r3, [r1]
	add r1, r1, #2
	ldr r4, _08068734  @ =0x00000958
	add r0, r5, r4
	ldrh r2, [r0]
	strh r2, [r1]
	add r1, r1, #2
	sub r4, r4, #8
	add r0, r5, r4
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r4, r4, #6
	add r0, r5, r4
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r0, _08068738  @ =0x04000018
	strh r3, [r0]
	add r0, r0, #2
	strh r2, [r0]
	add r1, r1, #6
	ldr r2, _0806873C  @ =0x00000954
	add r0, r5, r2
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r3, _08068740  @ =0x0000095A
	add r0, r5, r3
	b _080689E2
	.byte 0x00
	.byte 0x00
_0806871C:
	.4byte 0x000009AC
_08068720:
	.4byte 0x000009B2
_08068724:
	.4byte 0x0000030E
_08068728:
	.4byte 0x00000A4C
_0806872C:
	.4byte 0x04000010
_08068730:
	.4byte 0x00000952
_08068734:
	.4byte 0x00000958
_08068738:
	.4byte 0x04000018
_0806873C:
	.4byte 0x00000954
_08068740:
	.4byte 0x0000095A
_08068744:
	ldr r4, _08068780  @ =0x0000050C
	add r0, r5, r4
	ldrh r1, [r0]
	mov r0, #248
	lsl r0, r0, #5
	and r0, r0, r1
	mov r1, #200
	lsl r1, r1, #5
	cmp r0, r1
	bne _08068794
	ldr r1, _08068784  @ =0x04000010
	ldr r2, _08068788  @ =0x00000954
	add r0, r5, r2
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r3, _0806878C  @ =0x0000095A
	add r0, r5, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #10
	ldr r4, _08068790  @ =0x00000A2E
	add r0, r5, r4
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r2, r2, #222
	add r0, r5, r2
	b _080689E2
	.byte 0x00
	.byte 0x00
_08068780:
	.4byte 0x0000050C
_08068784:
	.4byte 0x04000010
_08068788:
	.4byte 0x00000954
_0806878C:
	.4byte 0x0000095A
_08068790:
	.4byte 0x00000A2E
_08068794:
	ldr r1, _080687D0  @ =0x04000010
	ldr r3, _080687D4  @ =0x00000954
	add r0, r5, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r4, _080687D8  @ =0x0000095A
	add r0, r5, r4
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r2, _080687DC  @ =0x00000A2E
	add r0, r5, r2
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r3, r3, #222
	add r0, r5, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r4, r4, #210
	add r0, r5, r4
	ldrh r3, [r0]
	strh r3, [r1]
	add r1, r1, #2
	add r2, r2, #2
	add r0, r5, r2
	b _080688EE
	.byte 0x00
	.byte 0x00
_080687D0:
	.4byte 0x04000010
_080687D4:
	.4byte 0x00000954
_080687D8:
	.4byte 0x0000095A
_080687DC:
	.4byte 0x00000A2E
_080687E0:
	lsl r0, r1, #24
	lsr r0, r0, #24
	cmp r0, #0
	beq _080687F0
	cmp r0, #20
	beq _080687F0
	cmp r0, #29
	bne _08068850
_080687F0:
	ldr r1, _08068840  @ =0x04000010
	ldr r3, _08068844  @ =0x00000954
	add r0, r5, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r4, _08068848  @ =0x0000095A
	add r0, r5, r4
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r2, _0806884C  @ =0x00000A2E
	add r0, r5, r2
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r3, r3, #222
	add r0, r5, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r4, r4, #210
	add r0, r5, r4
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r2, r2, #2
	add r0, r5, r2
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	sub r3, r3, #214
	add r0, r5, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	sub r4, r4, #206
	add r0, r5, r4
	b _080689E2
	.byte 0x00
	.byte 0x00
_08068840:
	.4byte 0x04000010
_08068844:
	.4byte 0x00000954
_08068848:
	.4byte 0x0000095A
_0806884C:
	.4byte 0x00000A2E
_08068850:
	cmp r0, #25
	bne _080688A8
	ldr r1, _0806888C  @ =0x0400001C
	ldr r2, _08068890  @ =0x00000A2C
	add r0, r5, r2
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r3, _08068894  @ =0x0400001E
	mov r4, #163
	lsl r4, r4, #4
	add r0, r5, r4
	ldrh r1, [r0]
	strh r1, [r3]
	ldr r0, _08068898  @ =0x04000018
	strh r2, [r0]
	add r0, r0, #2
	strh r1, [r0]
	sub r0, r0, #6
	strh r2, [r0]
	add r0, r0, #2
	strh r1, [r0]
	ldr r1, _0806889C  @ =0x04000010
	ldr r2, _080688A0  @ =0x00000954
	add r0, r5, r2
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r3, _080688A4  @ =0x0000095A
	add r0, r5, r3
	b _080689E2
_0806888C:
	.4byte 0x0400001C
_08068890:
	.4byte 0x00000A2C
_08068894:
	.4byte 0x0400001E
_08068898:
	.4byte 0x04000018
_0806889C:
	.4byte 0x04000010
_080688A0:
	.4byte 0x00000954
_080688A4:
	.4byte 0x0000095A
_080688A8:
	cmp r0, #24
	bne _0806896C
	ldr r4, _080688FC  @ =0x00000A4C
	add r0, r5, r4
	ldrh r0, [r0]
	cmp r0, #5
	bhi _08068910
	ldr r1, _08068900  @ =0x04000010
	ldr r2, _08068904  @ =0x00000954
	add r0, r5, r2
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r3, _08068908  @ =0x0000095A
	add r0, r5, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	sub r4, r4, #30
	add r0, r5, r4
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r2, r2, #222
	add r0, r5, r2
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r3, r3, #210
	add r0, r5, r3
	ldrh r3, [r0]
	strh r3, [r1]
	add r1, r1, #2
	add r4, r4, #2
	add r0, r5, r4
_080688EE:
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r0, _0806890C  @ =0x0400001C
	strh r3, [r0]
	add r0, r0, #2
	strh r2, [r0]
	b _080689E6
_080688FC:
	.4byte 0x00000A4C
_08068900:
	.4byte 0x04000010
_08068904:
	.4byte 0x00000954
_08068908:
	.4byte 0x0000095A
_0806890C:
	.4byte 0x0400001C
_08068910:
	ldr r1, _08068954  @ =0x04000010
	ldr r2, _08068958  @ =0x00000954
	add r0, r5, r2
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r3, _0806895C  @ =0x0000095A
	add r0, r5, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r4, _08068960  @ =0x00000A2C
	add r0, r5, r4
	ldrh r3, [r0]
	strh r3, [r1]
	add r1, r1, #2
	add r2, r2, #220
	add r0, r5, r2
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r0, _08068964  @ =0x04000018
	strh r3, [r0]
	add r0, r0, #2
	strh r2, [r0]
	add r1, r1, #6
	ldr r3, _08068968  @ =0x0000095C
	add r0, r5, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	sub r4, r4, #206
	add r0, r5, r4
	b _080689E2
	.byte 0x00
	.byte 0x00
_08068954:
	.4byte 0x04000010
_08068958:
	.4byte 0x00000954
_0806895C:
	.4byte 0x0000095A
_08068960:
	.4byte 0x00000A2C
_08068964:
	.4byte 0x04000018
_08068968:
	.4byte 0x0000095C
_0806896C:
	ldr r1, _080689B0  @ =0x04000010
	ldr r2, _080689B4  @ =0x00000954
	add r0, r5, r2
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r3, _080689B8  @ =0x0000095A
	add r0, r5, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r4, _080689BC  @ =0x00000A2C
	add r0, r5, r4
	ldrh r3, [r0]
	strh r3, [r1]
	add r1, r1, #2
	add r2, r2, #220
	add r0, r5, r2
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r0, _080689C0  @ =0x04000018
	strh r3, [r0]
	add r0, r0, #2
	strh r2, [r0]
	add r1, r1, #6
	ldr r3, _080689C4  @ =0x0000095C
	add r0, r5, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	sub r4, r4, #206
	add r0, r5, r4
	b _080689E2
	.byte 0x00
	.byte 0x00
_080689B0:
	.4byte 0x04000010
_080689B4:
	.4byte 0x00000954
_080689B8:
	.4byte 0x0000095A
_080689BC:
	.4byte 0x00000A2C
_080689C0:
	.4byte 0x04000018
_080689C4:
	.4byte 0x0000095C
_080689C8:
	ldr r1, _08068A00  @ =0xFFFFFAB0
	add r5, r4, r1
	cmp r0, #2
	bne _080689E6
	ldr r1, _08068A04  @ =0x04000010
	mov r2, #128
	lsl r2, r2, #3
	add r0, r4, r2
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r3, _08068A08  @ =0x00000406
	add r0, r4, r3
_080689E2:
	ldrh r0, [r0]
	strh r0, [r1]
_080689E6:
	mov r4, #152
	lsl r4, r4, #4
	add r0, r5, r4
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08068A0C
	mov r1, #128
	lsl r1, r1, #19
	mov r0, #0
	strh r0, [r1]
	b _08068A18
_08068A00:
	.4byte 0xFFFFFAB0
_08068A04:
	.4byte 0x04000010
_08068A08:
	.4byte 0x00000406
_08068A0C:
	mov r0, #128
	lsl r0, r0, #19
	ldr r2, _08068AB8  @ =0x0000050C
	add r1, r5, r2
	ldrh r1, [r1]
	strh r1, [r0]
_08068A18:
	ldr r3, _08068ABC  @ =0x00000982
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r0, #1
	beq _08068A26
	cmp r0, #4
	bne _08068A48
_08068A26:
	ldr r1, _08068AC0  @ =0x0400004A
	ldr r4, _08068AC4  @ =0x0000051C
	add r0, r5, r4
	ldrh r0, [r0]
	strh r0, [r1]
	sub r1, r1, #2
	ldr r2, _08068AC8  @ =0x0000051A
	add r0, r5, r2
	ldrh r0, [r0]
	strh r0, [r1]
	sub r1, r1, #8
	ldr r0, _08068ACC  @ =gUnknown_02001400
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #4
	mov r0, #255
	strh r0, [r1]
_08068A48:
	ldr r4, _08068AD0  @ =gRam
	ldr r3, _08068AD4  @ =0x000009A3
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #1
	bne _08068B00
	ldr r1, _08068AD8  @ =0x0400000A
	ldr r5, _08068ADC  @ =0x00000514
	add r0, r4, r5
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r2, _08068AE0  @ =0x00000516
	add r0, r4, r2
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	mov r3, #163
	lsl r3, r3, #3
	add r0, r4, r3
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r3, _08068AE4  @ =0x0400004C
	ldr r5, _08068AE8  @ =0x00000D02
	add r0, r4, r5
	ldrh r1, [r0]
	lsl r0, r1, #4
	orr r0, r0, r1
	lsl r2, r1, #8
	orr r0, r0, r2
	lsl r1, r1, #12
	orr r0, r0, r1
	strh r0, [r3]
	ldr r1, _08068AEC  @ =0x04000050
	ldr r2, _08068AF0  @ =0x0000051E
	add r0, r4, r2
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r2, _08068AF4  @ =0x04000054
	ldr r3, _08068AF8  @ =0x0000099A
	add r0, r4, r3
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	strh r0, [r2]
	sub r2, r2, #2
	ldr r5, _08068AFC  @ =0x00000999
	add r0, r4, r5
	ldrb r1, [r0]
	lsl r1, r1, #8
	sub r3, r3, #2
	add r0, r4, r3
	ldrb r0, [r0]
	orr r0, r0, r1
	b _08068B16
	.byte 0x00
	.byte 0x00
_08068AB8:
	.4byte 0x0000050C
_08068ABC:
	.4byte 0x00000982
_08068AC0:
	.4byte 0x0400004A
_08068AC4:
	.4byte 0x0000051C
_08068AC8:
	.4byte 0x0000051A
_08068ACC:
	.4byte gUnknown_02001400
_08068AD0:
	.4byte gRam
_08068AD4:
	.4byte 0x000009A3
_08068AD8:
	.4byte 0x0400000A
_08068ADC:
	.4byte 0x00000514
_08068AE0:
	.4byte 0x00000516
_08068AE4:
	.4byte 0x0400004C
_08068AE8:
	.4byte 0x00000D02
_08068AEC:
	.4byte 0x04000050
_08068AF0:
	.4byte 0x0000051E
_08068AF4:
	.4byte 0x04000054
_08068AF8:
	.4byte 0x0000099A
_08068AFC:
	.4byte 0x00000999
_08068B00:
	ldr r1, _08068B58  @ =0x04000050
	ldr r5, _08068B5C  @ =0x0000051E
	add r0, r4, r5
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r2, _08068B60  @ =0x04000054
	ldr r1, _08068B64  @ =0x0000099A
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
_08068B16:
	strh r0, [r2]
_08068B18:
	ldr r1, _08068B68  @ =0x04000004
	ldr r2, _08068B6C  @ =gRam
	ldr r3, _08068B70  @ =0x0000050E
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _08068B74  @ =0x04000200
	mov r4, #162
	lsl r4, r4, #3
	add r0, r2, r4
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	mov r0, #1
	strh r0, [r1]
	mov r5, #160
	lsl r5, r5, #3
	add r1, r2, r5
	ldrh r0, [r1]
	mov r0, #1
	strh r0, [r1]
	ldr r0, _08068B78  @ =0x0000098C
	add r2, r2, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _08068B50
	bl sub_0812A7A4
_08068B50:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08068B58:
	.4byte 0x04000050
_08068B5C:
	.4byte 0x0000051E
_08068B60:
	.4byte 0x04000054
_08068B64:
	.4byte 0x0000099A
_08068B68:
	.4byte 0x04000004
_08068B6C:
	.4byte gRam
_08068B70:
	.4byte 0x0000050E
_08068B74:
	.4byte 0x04000200
_08068B78:
	.4byte 0x0000098C
	THUMB_FUNC_END sub_08068410

