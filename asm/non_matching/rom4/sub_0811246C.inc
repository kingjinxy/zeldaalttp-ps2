	THUMB_FUNC_START sub_0811246C
sub_0811246C: @ 0x0811246C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _081124DC  @ =gRam
	ldr r1, _081124E0  @ =0x00000F62
	add r0, r6, r1
	add r7, r5, r0
	ldrb r2, [r7]
	cmp r2, #0
	bne _081124F8
	ldr r1, _081124E4  @ =0x00000996
	add r0, r6, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _081124A2
	ldr r0, _081124E8  @ =0x00000F92
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_081124A2:
	ldr r1, _081124EC  @ =0x00000F12
	add r0, r6, r1
	add r0, r5, r0
	strb r2, [r0]
	add r1, r1, #16
	add r0, r6, r1
	add r0, r5, r0
	strb r2, [r0]
	add r1, r1, #112
	add r0, r6, r1
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #9
	beq _081124C0
	b _0811279E
_081124C0:
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	strb r2, [r1]
	ldr r1, _081124F0  @ =gUnknown_02010990
	mov r0, #2
	strb r0, [r1]
	ldr r2, _081124F4  @ =0x00000FC2
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #48
	strb r1, [r0]
	b _0811279E
	.byte 0x00
	.byte 0x00
_081124DC:
	.4byte gRam
_081124E0:
	.4byte 0x00000F62
_081124E4:
	.4byte 0x00000996
_081124E8:
	.4byte 0x00000F92
_081124EC:
	.4byte 0x00000F12
_081124F0:
	.4byte gUnknown_02010990
_081124F4:
	.4byte 0x00000FC2
_081124F8:
	cmp r2, #1
	bne _081125F0
	ldr r1, _081125C4  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	and r2, r2, r0
	cmp r2, #0
	bne _08112514
	ldr r2, _081125C8  @ =0x00000F92
	add r1, r6, r2
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_08112514:
	ldr r1, _081125C8  @ =0x00000F92
	add r0, r6, r1
	add r0, r0, r5
	mov r8, r0
	mov r0, #0
	mov r2, r8
	strb r0, [r2]
	add r1, r1, #48
	add r0, r6, r1
	add r0, r0, r5
	mov r9, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08112532
	b _0811279E
_08112532:
	ldr r2, _081125CC  @ =0x000016C4
	add r0, r6, r2
	ldrh r1, [r0]
	ldr r2, _081125D0  @ =0x00000968
	add r0, r6, r2
	mov r4, #0
	strh r1, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r6, r1
	ldrh r1, [r0]
	add r2, r2, #4
	add r0, r6, r2
	strh r1, [r0]
	add r0, r5, #0
	mov r1, #36
	bl sub_080C2DCC
	ldr r1, _081125D4  @ =0x00000F12
	add r0, r6, r1
	add r0, r5, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _081125D8  @ =0x00000F22
	add r0, r6, r1
	add r0, r5, r0
	add r2, r2, #1
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	mov r0, r8
	strb r4, [r0]
	ldr r1, _081125DC  @ =gUnknown_02010990
	mov r0, #15
	strb r0, [r1]
	ldr r1, _081125E0  @ =0x00000F72
	add r2, r6, r1
	add r2, r5, r2
	strb r4, [r2]
	add r1, r1, #16
	add r0, r6, r1
	add r0, r5, r0
	strb r4, [r0]
	ldr r1, _081125E4  @ =gUnknown_0817D7F8
	ldrb r0, [r2]
	add r0, r0, r1
	ldrb r0, [r0]
	mov r1, r9
	strb r0, [r1]
	ldr r1, _081125E8  @ =0x00000FB2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	lsr r1, r1, #1
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #2
	ldrb r2, [r2]
	add r0, r0, r2
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _081125EC  @ =gUnknown_0817D7C8
	add r0, r1, r0
	ldrb r0, [r0]
	mov r2, r8
	strb r0, [r2]
	b _0811279E
_081125C4:
	.4byte 0x00000996
_081125C8:
	.4byte 0x00000F92
_081125CC:
	.4byte 0x000016C4
_081125D0:
	.4byte 0x00000968
_081125D4:
	.4byte 0x00000F12
_081125D8:
	.4byte 0x00000F22
_081125DC:
	.4byte gUnknown_02010990
_081125E0:
	.4byte 0x00000F72
_081125E4:
	.4byte gUnknown_0817D7F8
_081125E8:
	.4byte 0x00000FB2
_081125EC:
	.4byte gUnknown_0817D7C8
_081125F0:
	cmp r2, #2
	beq _081125F6
	b _0811279E
_081125F6:
	ldr r1, _08112674  @ =0x00000F72
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #1
	bls _0811261C
	ldr r2, _08112678  @ =0x000015ED
	add r0, r6, r2
	mov r1, #246
	strb r1, [r0]
	sub r2, r2, #1
	add r0, r6, r2
	strb r1, [r0]
	ldr r1, _0811267C  @ =gUnknown_02010991
	mov r0, #40
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080C51C8
_0811261C:
	ldr r1, _08112680  @ =0x00001042
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	cmp r1, #0
	beq _081126B8
	ldr r0, _08112684  @ =gUnknown_02010992
	ldrb r0, [r0]
	cmp r0, #3
	bne _08112698
	ldr r2, _08112688  @ =0x000016C4
	add r0, r6, r2
	ldrh r1, [r0]
	ldr r2, _0811268C  @ =0x00000968
	add r0, r6, r2
	strh r1, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r6, r1
	ldrh r1, [r0]
	add r2, r2, #4
	add r0, r6, r2
	strh r1, [r0]
	add r0, r5, #0
	mov r1, #36
	bl sub_080C2DCC
	ldr r1, _08112690  @ =0x00000F12
	add r0, r6, r1
	add r0, r5, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _08112694  @ =0x00000F22
	add r0, r6, r1
	add r0, r5, r0
	add r2, r2, #1
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	b _081126B8
	.byte 0x00
	.byte 0x00
_08112674:
	.4byte 0x00000F72
_08112678:
	.4byte 0x000015ED
_0811267C:
	.4byte gUnknown_02010991
_08112680:
	.4byte 0x00001042
_08112684:
	.4byte gUnknown_02010992
_08112688:
	.4byte 0x000016C4
_0811268C:
	.4byte 0x00000968
_08112690:
	.4byte 0x00000F12
_08112694:
	.4byte 0x00000F22
_08112698:
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _081126AC
	ldr r0, _081126A8  @ =0x00000F22
	add r1, r6, r0
	b _081126B0
_081126A8:
	.4byte 0x00000F22
_081126AC:
	ldr r2, _08112748  @ =0x00000F12
	add r1, r6, r2
_081126B0:
	add r1, r5, r1
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
_081126B8:
	ldr r7, _0811274C  @ =gRam
	ldr r6, _08112750  @ =0x00000FC2
	add r0, r7, r6
	add r3, r5, r0
	ldrb r4, [r3]
	cmp r4, #0
	bne _0811279E
	ldr r1, _08112754  @ =0x00000F72
	add r0, r7, r1
	add r6, r5, r0
	ldrb r0, [r6]
	cmp r0, #2
	bne _081126DE
	add r0, r5, #0
	mov r1, #107
	str r3, [sp]
	bl sub_080CF0AC
	ldr r3, [sp]
_081126DE:
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #12
	bne _081126FC
	ldr r2, _08112758  @ =0x00000F82
	add r0, r7, r2
	add r0, r5, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #2
	strb r0, [r6]
_081126FC:
	ldr r1, _0811275C  @ =gUnknown_0817D7F8
	ldrb r0, [r6]
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #1
	strb r0, [r3]
	ldr r1, _08112760  @ =0x00000FB2
	add r0, r7, r1
	add r0, r5, r0
	ldrb r1, [r0]
	lsr r1, r1, #1
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #2
	ldrb r6, [r6]
	add r0, r0, r6
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r2, _08112764  @ =0x00000F92
	add r0, r7, r2
	add r2, r5, r0
	ldr r0, _08112768  @ =gUnknown_0817D7C8
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r6, _08112758  @ =0x00000F82
	add r0, r7, r6
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #3
	bne _0811279E
	ldr r0, _0811276C  @ =gUnknown_02010992
	ldrb r0, [r0]
	cmp r0, #3
	bne _08112770
	mov r1, #16
	sub r6, r6, #32
	b _08112774
_08112748:
	.4byte 0x00000F12
_0811274C:
	.4byte gRam
_08112750:
	.4byte 0x00000FC2
_08112754:
	.4byte 0x00000F72
_08112758:
	.4byte 0x00000F82
_0811275C:
	.4byte gUnknown_0817D7F8
_08112760:
	.4byte 0x00000FB2
_08112764:
	.4byte 0x00000F92
_08112768:
	.4byte gUnknown_0817D7C8
_0811276C:
	.4byte gUnknown_02010992
_08112770:
	mov r1, #48
	ldr r6, _081127AC  @ =0x00000F62
_08112774:
	add r0, r7, r6
	add r0, r5, r0
	strb r4, [r0]
	strb r4, [r2]
	ldr r2, _081127B0  @ =0x00000F52
	add r0, r7, r2
	add r0, r5, r0
	strb r4, [r0]
	strb r1, [r3]
	ldr r0, _081127B4  @ =gUnknown_02010990
	strb r4, [r0]
	add r0, r0, #3
	strb r4, [r0]
	sub r6, r6, #189
	add r1, r7, r6
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #240
	and r0, r0, r2
	add r0, r0, #5
	strb r0, [r1]
_0811279E:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_081127AC:
	.4byte 0x00000F62
_081127B0:
	.4byte 0x00000F52
_081127B4:
	.4byte gUnknown_02010990
	THUMB_FUNC_END sub_0811246C

