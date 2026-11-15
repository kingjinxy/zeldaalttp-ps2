	THUMB_FUNC_START sub_0812430C
sub_0812430C: @ 0x0812430C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
	ldr r6, _081243DC  @ =gRam
	ldr r1, _081243E0  @ =0x00000E1F
	add r0, r6, r1
	add r0, r0, r10
	mov r9, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0812440C
	ldr r2, _081243E4  @ =0x00000DED
	add r0, r6, r2
	mov r3, r10
	add r4, r3, r0
	ldrb r0, [r4]
	add r0, r0, #255
	cmp r0, #239
	bgt _08124340
	mov r0, #240
_08124340:
	strb r0, [r4]
	mov r0, r10
	bl sub_080BF774
	ldr r3, _081243DC  @ =gRam
	ldr r4, _081243E8  @ =0x00000DC5
	add r0, r3, r4
	mov r7, r10
	add r6, r7, r0
	ldrb r0, [r6]
	mov r1, #150
	lsl r1, r1, #4
	add r4, r3, r1
	strb r0, [r4]
	ldr r2, _081243EC  @ =0x00000DD9
	add r0, r3, r2
	add r5, r7, r0
	ldrb r0, [r5]
	ldr r7, _081243F0  @ =0x00000961
	add r7, r7, r3
	mov r8, r7
	strb r0, [r7]
	ldr r1, _081243F4  @ =0x00000DCF
	add r0, r3, r1
	add r0, r0, r10
	ldrb r0, [r0]
	ldr r2, _081243F8  @ =0x00000964
	add r7, r3, r2
	strb r0, [r7]
	add r1, r1, #20
	add r0, r3, r1
	add r0, r0, r10
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r3, r2
	strb r1, [r0]
	mov r1, #0
	ldrsh r0, [r4, r1]
	add r2, r2, #203
	add r1, r3, r2
	ldrh r2, [r1]
	sub r0, r0, r2
	cmp r0, #55
	bgt _08124472
	add r0, r2, #0
	add r0, r0, #56
	strh r0, [r4]
	ldr r1, _081243FC  @ =gUnknown_02006890
	add r0, r0, #8
	strh r0, [r1]
	sub r1, r1, #2
	ldrh r0, [r7]
	add r0, r0, #8
	strh r0, [r1]
	ldrb r0, [r4]
	strb r0, [r6]
	mov r4, r8
	ldrb r0, [r4]
	strb r0, [r5]
	ldr r7, _081243E0  @ =0x00000E1F
	add r1, r3, r7
	add r1, r1, r10
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08124400  @ =0x00000A3E
	add r1, r3, r0
	mov r0, #255
	strb r0, [r1]
	ldr r2, _08124404  @ =0x00000A3C
	add r1, r3, r2
	ldr r0, _08124408  @ =0x0000FFF1
	strh r0, [r1]
	mov r0, #159
	lsl r0, r0, #1
	bl sub_080AF4FC
	b _08124682
_081243DC:
	.4byte gRam
_081243E0:
	.4byte 0x00000E1F
_081243E4:
	.4byte 0x00000DED
_081243E8:
	.4byte 0x00000DC5
_081243EC:
	.4byte 0x00000DD9
_081243F0:
	.4byte 0x00000961
_081243F4:
	.4byte 0x00000DCF
_081243F8:
	.4byte 0x00000964
_081243FC:
	.4byte gUnknown_02006890
_08124400:
	.4byte 0x00000A3E
_08124404:
	.4byte 0x00000A3C
_08124408:
	.4byte 0x0000FFF1
_0812440C:
	cmp r0, #1
	bne _08124472
	ldr r3, _08124524  @ =0x000009AD
	add r0, r6, r3
	ldrb r2, [r0]
	cmp r2, #0
	beq _0812441C
	b _08124580
_0812441C:
	ldr r4, _08124528  @ =0x00000DF7
	add r0, r6, r4
	add r0, r0, r10
	mov r1, #16
	strb r1, [r0]
	ldr r7, _0812452C  @ =0x00000DCF
	add r5, r6, r7
	add r5, r5, r10
	ldrb r0, [r5]
	ldr r1, _08124530  @ =0x00001732
	add r1, r1, r6
	mov r8, r1
	strb r0, [r1]
	ldr r3, _08124534  @ =0x00000DE3
	add r4, r6, r3
	add r4, r4, r10
	ldrb r0, [r4]
	ldr r7, _08124538  @ =0x00001733
	add r6, r6, r7
	strb r0, [r6]
	ldr r7, _0812453C  @ =gUnknown_02006888
	ldrb r0, [r7]
	strb r0, [r5]
	strb r2, [r4]
	mov r0, r10
	bl sub_080C1768
	ldrb r0, [r5]
	strb r0, [r7]
	mov r1, r8
	ldrb r0, [r1]
	strb r0, [r5]
	ldrb r0, [r6]
	strb r0, [r4]
	ldrb r0, [r7]
	cmp r0, #47
	bls _08124472
	mov r0, #48
	strb r0, [r7]
	mov r2, r9
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
_08124472:
	ldr r7, _08124540  @ =gRam
	ldr r3, _08124524  @ =0x000009AD
	add r0, r7, r3
	ldrb r0, [r0]
	str r0, [sp]
	cmp r0, #0
	beq _08124482
	b _08124580
_08124482:
	ldr r4, _08124544  @ =0x00000E1F
	add r0, r7, r4
	mov r1, r10
	add r3, r1, r0
	ldrb r0, [r3]
	cmp r0, #0
	bne _08124492
	b _08124682
_08124492:
	cmp r0, #1
	beq _08124580
	cmp r0, #3
	bne _08124554
	ldr r2, _08124528  @ =0x00000DF7
	add r0, r7, r2
	add r0, r0, r10
	mov r1, #48
	strb r1, [r0]
	ldr r3, _0812452C  @ =0x00000DCF
	add r5, r7, r3
	add r5, r5, r10
	ldrb r0, [r5]
	ldr r4, _08124530  @ =0x00001732
	add r4, r4, r7
	mov r9, r4
	strb r0, [r4]
	ldr r0, _08124534  @ =0x00000DE3
	add r4, r7, r0
	add r4, r4, r10
	ldrb r0, [r4]
	ldr r1, _08124538  @ =0x00001733
	add r1, r1, r7
	mov r8, r1
	strb r0, [r1]
	ldr r6, _0812453C  @ =gUnknown_02006888
	ldrb r0, [r6]
	strb r0, [r5]
	mov r2, sp
	ldrb r2, [r2]
	strb r2, [r4]
	mov r0, r10
	bl sub_080C1768
	ldrb r0, [r5]
	strb r0, [r6]
	mov r3, r9
	ldrb r0, [r3]
	strb r0, [r5]
	mov r1, r8
	ldrb r0, [r1]
	strb r0, [r4]
	ldrb r0, [r6]
	cmp r0, #239
	bls _08124580
	ldr r2, _08124548  @ =0x00000CA9
	add r0, r7, r2
	mov r3, sp
	ldrb r3, [r3]
	strb r3, [r0]
	mov r4, #202
	lsl r4, r4, #4
	add r2, r7, r4
	ldrb r0, [r2]
	mov r3, #128
	lsl r3, r3, #2
	add r1, r3, #0
	add r0, r0, r1
	mov r4, #0
	strh r0, [r2]
	bl sub_081331F4
	ldr r0, _0812454C  @ =0x0000099B
	add r1, r7, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _08124550  @ =0x00000E15
	add r0, r7, r1
	add r0, r0, r10
	strb r4, [r0]
	b _0812473A
	.byte 0x00
	.byte 0x00
_08124524:
	.4byte 0x000009AD
_08124528:
	.4byte 0x00000DF7
_0812452C:
	.4byte 0x00000DCF
_08124530:
	.4byte 0x00001732
_08124534:
	.4byte 0x00000DE3
_08124538:
	.4byte 0x00001733
_0812453C:
	.4byte gUnknown_02006888
_08124540:
	.4byte gRam
_08124544:
	.4byte 0x00000E1F
_08124548:
	.4byte 0x00000CA9
_0812454C:
	.4byte 0x0000099B
_08124550:
	.4byte 0x00000E15
_08124554:
	ldr r1, _081246CC  @ =gUnknown_02006892
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _08124580
	ldr r4, _081246D0  @ =0x00000B6E
	add r1, r7, r4
	mov r0, #5
	strb r0, [r1]
	ldr r1, _081246D4  @ =0x000009E8
	add r0, r7, r1
	mov r1, #0
	strh r2, [r0]
	ldr r2, _081246D8  @ =0x00000A02
	add r0, r7, r2
	strb r1, [r0]
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
_08124580:
	ldr r4, _081246DC  @ =gRam
	ldr r3, _081246E0  @ =0x00000E1F
	add r0, r4, r3
	add r0, r0, r10
	ldrb r0, [r0]
	ldr r7, _081246E4  @ =0x00001732
	add r1, r4, r7
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0812459A
	bl sub_0812483C
_0812459A:
	mov r5, #6
	add r6, r4, #0
	mov r9, r6
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r6
	mov r8, r0
_081245A8:
	ldr r0, _081246E8  @ =0x000009AD
	add r0, r0, r9
	ldrb r0, [r0]
	cmp r0, #0
	bne _081245D6
	ldr r0, _081246E4  @ =0x00001732
	add r0, r0, r9
	ldrb r0, [r0]
	cmp r0, #1
	beq _081245D6
	ldr r2, _081246EC  @ =gUnknown_03002BC6
	ldrb r1, [r2]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _081245D6
	ldr r3, _081246F0  @ =gUnknown_02006880
	add r0, r5, r3
	ldrb r1, [r0]
	add r1, r1, #1
	mov r2, #63
	and r1, r1, r2
	strb r1, [r0]
_081245D6:
	add r4, r6, #0
	ldr r0, _081246F4  @ =gUnknown_02006888
	ldrb r1, [r0]
	mov r7, #151
	lsl r7, r7, #4
	add r0, r4, r7
	strb r1, [r0]
	ldr r1, _081246F0  @ =gUnknown_02006880
	add r0, r5, r1
	ldrb r1, [r0]
	add r0, r5, #0
	bl sub_080C06EC
	ldr r2, _081246F8  @ =0x00000964
	add r3, r4, r2
	mov r7, #0
	ldrsh r0, [r3, r7]
	cmp r0, #0
	beq _08124606
	mov r1, r8
	mov r2, #0
	ldrsh r0, [r1, r2]
	neg r0, r0
	strh r0, [r1]
_08124606:
	mov r7, #150
	lsl r7, r7, #4
	add r2, r4, r7
	ldr r0, _081246FC  @ =gUnknown_02006890
	ldrh r1, [r0]
	ldrh r0, [r2]
	add r1, r1, r0
	add r7, r7, #208
	add r0, r4, r7
	ldrh r0, [r0]
	add r0, r0, #8
	sub r1, r1, r0
	strh r1, [r2]
	ldr r1, _08124700  @ =0x0000096C
	add r0, r4, r1
	mov r4, #0
	ldrsh r0, [r0, r4]
	cmp r0, #0
	beq _08124636
	ldr r7, _08124704  @ =gUnknown_03002B98
	mov r1, #0
	ldrsh r0, [r7, r1]
	neg r0, r0
	strh r0, [r7]
_08124636:
	ldr r0, _08124708  @ =gUnknown_0200688E
	ldrh r1, [r0]
	ldr r4, _08124704  @ =gUnknown_03002B98
	ldrh r4, [r4]
	add r1, r1, r4
	ldr r7, _0812470C  @ =0x00000A2C
	add r0, r6, r7
	ldrh r0, [r0]
	add r0, r0, #8
	sub r1, r1, r0
	strh r1, [r3]
	ldr r0, _08124710  @ =gUnknown_02006898
	add r1, r5, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r2, _08124714  @ =gUnknown_020068A0
	add r1, r5, r2
	ldr r4, _08124718  @ =0x00000961
	add r0, r6, r4
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r7, _0812471C  @ =gUnknown_020068A8
	add r1, r5, r7
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _08124720  @ =gUnknown_020068B0
	add r1, r5, r0
	ldr r2, _08124724  @ =0x00000965
	add r0, r6, r2
	ldrb r0, [r0]
	strb r0, [r1]
	bl sub_08124938
	sub r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r0, #0
	bge _081245A8
_08124682:
	mov r0, r10
	bl sub_080C17A8
	ldr r1, _08124728  @ =gUnknown_0200689F
	ldr r4, _081246DC  @ =gRam
	mov r3, #150
	lsl r3, r3, #4
	add r0, r4, r3
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #8
	ldr r7, _08124718  @ =0x00000961
	add r0, r4, r7
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #8
	ldr r2, _081246F8  @ =0x00000964
	add r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #8
	add r3, r3, #5
	add r0, r4, r3
	ldrb r0, [r0]
	strb r0, [r1]
	bl sub_08124938
	ldr r7, _081246E0  @ =0x00000E1F
	add r0, r4, r7
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #0
	bne _0812472C
	mov r0, r10
	bl sub_08122630
	b _0812473A
_081246CC:
	.4byte gUnknown_02006892
_081246D0:
	.4byte 0x00000B6E
_081246D4:
	.4byte 0x000009E8
_081246D8:
	.4byte 0x00000A02
_081246DC:
	.4byte gRam
_081246E0:
	.4byte 0x00000E1F
_081246E4:
	.4byte 0x00001732
_081246E8:
	.4byte 0x000009AD
_081246EC:
	.4byte gUnknown_03002BC6
_081246F0:
	.4byte gUnknown_02006880
_081246F4:
	.4byte gUnknown_02006888
_081246F8:
	.4byte 0x00000964
_081246FC:
	.4byte gUnknown_02006890
_08124700:
	.4byte 0x0000096C
_08124704:
	.4byte gUnknown_03002B98
_08124708:
	.4byte gUnknown_0200688E
_0812470C:
	.4byte 0x00000A2C
_08124710:
	.4byte gUnknown_02006898
_08124714:
	.4byte gUnknown_020068A0
_08124718:
	.4byte 0x00000961
_0812471C:
	.4byte gUnknown_020068A8
_08124720:
	.4byte gUnknown_020068B0
_08124724:
	.4byte 0x00000965
_08124728:
	.4byte gUnknown_0200689F
_0812472C:
	ldr r1, _0812474C  @ =0x000009AD
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0812473A
	bl sub_08124750
_0812473A:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812474C:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0812430C

