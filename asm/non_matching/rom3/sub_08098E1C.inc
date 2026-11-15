	THUMB_FUNC_START sub_08098E1C
sub_08098E1C: @ 0x08098E1C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	bl sub_0809E600
	bl sub_08098778
	lsl r0, r0, #24
	cmp r0, #0
	beq _08098E50
	ldr r0, _08098E48  @ =gRam
	ldr r1, _08098E4C  @ =0x00001718
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #23
	beq _08098E40
	b _080992FE
_08098E40:
	bl sub_08098950
	b _080992FE
	.byte 0x00
	.byte 0x00
_08098E48:
	.4byte gRam
_08098E4C:
	.4byte 0x00001718
_08098E50:
	ldr r1, _08098E80  @ =gRam
	ldr r2, _08098E84  @ =0x00001804
	add r0, r1, r2
	ldrb r3, [r0]
	add r6, r1, #0
	cmp r3, #0
	bne _08098E8C
	ldr r1, _08098E88  @ =0x0000180D
	add r0, r6, r1
	strb r3, [r0]
	add r2, r2, #2
	add r0, r6, r2
	strb r3, [r0]
	sub r1, r1, #244
	add r0, r6, r1
	strb r3, [r0]
	sub r2, r2, #238
	add r0, r6, r2
	strb r3, [r0]
	sub r1, r1, #20
	add r0, r6, r1
	strb r3, [r0]
	b _080992FE
	.byte 0x00
	.byte 0x00
_08098E80:
	.4byte gRam
_08098E84:
	.4byte 0x00001804
_08098E88:
	.4byte 0x0000180D
_08098E8C:
	ldr r2, _08098F3C  @ =0x000016E8
	add r0, r6, r2
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08098EA8
	ldr r3, _08098F40  @ =0x000016EA
	add r1, r6, r3
	ldrb r0, [r1]
	cmp r0, #8
	bls _08098EA8
	mov r0, #9
	strb r0, [r1]
_08098EA8:
	ldr r1, _08098F44  @ =0x0000174F
	add r0, r6, r1
	mov r5, #0
	strb r5, [r0]
	ldr r2, _08098F48  @ =0x00001702
	add r0, r6, r2
	ldrb r4, [r0]
	cmp r4, #0
	beq _08098F84
	ldr r3, _08098F4C  @ =0x0000180D
	add r4, r6, r3
	strb r5, [r4]
	add r1, r1, #183
	add r0, r6, r1
	strb r5, [r0]
	add r2, r2, #23
	add r0, r6, r2
	strb r5, [r0]
	ldr r3, _08098F50  @ =0x00001705
	add r0, r6, r3
	strb r5, [r0]
	sub r1, r1, #2
	add r0, r6, r1
	strb r5, [r0]
	sub r2, r2, #31
	add r0, r6, r2
	strb r5, [r0]
	ldr r0, _08098F54  @ =0x000017F1
	add r3, r6, r0
	ldrb r0, [r3]
	cmp r0, #0
	beq _08098F70
	sub r1, r1, #244
	add r2, r6, r1
	ldrb r0, [r2]
	cmp r0, #0
	beq _08098F00
	ldr r0, _08098F58  @ =0x0000176E
	add r1, r6, r0
	mov r0, #32
	strb r0, [r1]
	strb r5, [r4]
	strb r5, [r2]
	strb r5, [r3]
_08098F00:
	bl sub_08092BF4
	mov r0, #1
	strb r0, [r4]
	ldr r1, _08098F5C  @ =0x00001789
	add r0, r6, r1
	strb r5, [r0]
	ldr r2, _08098F60  @ =0x000016EB
	add r1, r6, r2
	mov r0, #2
	strb r0, [r1]
	ldr r3, _08098F64  @ =0x000016D4
	add r0, r6, r3
	strb r5, [r0]
	ldr r0, _08098F68  @ =0x00001727
	add r2, r6, r0
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2]
	mov r0, #17
	bl sub_0809E49C
	ldr r2, _08098F6C  @ =0x00001718
	add r1, r6, r2
	mov r0, #7
	strb r0, [r1]
	bl sub_08098D20
	b _080992FE
_08098F3C:
	.4byte 0x000016E8
_08098F40:
	.4byte 0x000016EA
_08098F44:
	.4byte 0x0000174F
_08098F48:
	.4byte 0x00001702
_08098F4C:
	.4byte 0x0000180D
_08098F50:
	.4byte 0x00001705
_08098F54:
	.4byte 0x000017F1
_08098F58:
	.4byte 0x0000176E
_08098F5C:
	.4byte 0x00001789
_08098F60:
	.4byte 0x000016EB
_08098F64:
	.4byte 0x000016D4
_08098F68:
	.4byte 0x00001727
_08098F6C:
	.4byte 0x00001718
_08098F70:
	ldr r3, _08098F80  @ =0x00001718
	add r1, r6, r3
	mov r0, #2
	strb r0, [r1]
	bl sub_08099C90
	b _080992FE
	.byte 0x00
	.byte 0x00
_08098F80:
	.4byte 0x00001718
_08098F84:
	ldr r0, _08098FD8  @ =0x00001806
	add r5, r6, r0
	ldrb r0, [r5]
	lsr r2, r0, #4
	ldrb r3, [r5]
	cmp r3, #0
	bne _08098F9C
	ldr r3, _08098FDC  @ =0x00001704
	add r1, r6, r3
	ldrb r3, [r1]
	sub r0, r3, #1
	strb r0, [r1]
_08098F9C:
	ldr r0, _08098FE0  @ =gUnknown_08167E4E
	add r0, r2, r0
	ldrb r0, [r0]
	and r3, r3, r0
	cmp r3, #0
	bne _08098FAE
	mov r0, #26
	bl sub_0809E43C
_08098FAE:
	ldrb r0, [r5]
	sub r0, r0, #1
	strb r0, [r5]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08098FF0
	strb r4, [r5]
	ldr r0, _08098FE4  @ =0x00001663
	add r1, r6, r0
	ldrb r2, [r1]
	ldr r0, _08098FE8  @ =gUnknown_08167E51
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r2, r0
	beq _08098FCE
	b _080991A4
_08098FCE:
	ldr r0, _08098FEC  @ =gUnknown_08167E60
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	b _080991A4
_08098FD8:
	.4byte 0x00001806
_08098FDC:
	.4byte 0x00001704
_08098FE0:
	.4byte gUnknown_08167E4E
_08098FE4:
	.4byte 0x00001663
_08098FE8:
	.4byte gUnknown_08167E51
_08098FEC:
	.4byte gUnknown_08167E60
_08098FF0:
	cmp r0, #0
	bne _08098FFC
	mov r0, #25
	mov r1, #1
	bl sub_080BEA28
_08098FFC:
	ldr r1, _08099044  @ =0x00001704
	add r0, r6, r1
	strb r4, [r0]
	ldr r2, _08099048  @ =0x00000544
	add r0, r6, r2
	ldrb r1, [r0]
	mov r7, #128
	add r0, r7, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0809905C
	ldr r3, _0809904C  @ =0x000016D4
	add r0, r6, r3
	strb r4, [r0]
	strb r4, [r5]
	ldr r1, _08099050  @ =0x00001719
	add r0, r6, r1
	strb r4, [r0]
	ldr r2, _08099054  @ =0x00001718
	add r0, r6, r2
	strb r4, [r0]
	ldr r3, _08099058  @ =0x00001804
	add r0, r6, r3
	strb r4, [r0]
	sub r1, r1, #49
	add r0, r6, r1
	ldrb r1, [r0]
	add r0, r7, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0809903C
	b _080992FE
_0809903C:
	sub r2, r2, #19
	add r0, r6, r2
	strb r4, [r0]
	b _080992FE
_08099044:
	.4byte 0x00001704
_08099048:
	.4byte 0x00000544
_0809904C:
	.4byte 0x000016D4
_08099050:
	.4byte 0x00001719
_08099054:
	.4byte 0x00001718
_08099058:
	.4byte 0x00001804
_0809905C:
	mov r0, #0
	mov r1, #30
	bl sub_080AE5EC
	ldr r3, _08099164  @ =0x000016D6
	add r0, r6, r3
	strb r4, [r0]
	ldr r1, _08099168  @ =0x000016D7
	add r0, r6, r1
	strb r4, [r0]
	ldr r2, _0809916C  @ =0x0000177F
	add r1, r6, r2
	mov r0, #64
	strb r0, [r1]
	add r3, r3, #67
	add r1, r6, r3
	mov r0, #16
	strb r0, [r1]
	ldr r1, _08099170  @ =0x000016E8
	add r0, r6, r1
	ldrb r1, [r0]
	add r0, r7, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08099098
	sub r2, r2, #83
	add r0, r6, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080990A6
_08099098:
	ldr r3, _08099174  @ =0x00000545
	add r0, r6, r3
	ldrb r0, [r0]
	mov r3, #15
	and r3, r3, r0
	cmp r3, #0
	bne _080990B8
_080990A6:
	ldr r1, _08099178  @ =gRam
	ldr r2, _0809917C  @ =0x000016D5
	add r0, r1, r2
	ldrb r0, [r0]
	lsr r2, r0, #1
	ldr r0, _08099180  @ =gUnknown_08167E4A
	add r0, r2, r0
	ldrb r3, [r0]
	add r6, r1, #0
_080990B8:
	add r4, r6, #0
	ldr r1, _08099184  @ =0x000016CC
	add r0, r4, r1
	mov r1, #0
	strb r3, [r0]
	ldr r2, _08099188  @ =0x00001727
	add r0, r4, r2
	strb r3, [r0]
	add r2, r2, #167
	add r0, r4, r2
	strb r3, [r0]
	ldr r3, _0809918C  @ =0x0000172B
	add r0, r4, r3
	strb r1, [r0]
	bl sub_08096F30
	mov r0, #182
	lsl r0, r0, #5
	add r0, r0, r4
	mov r9, r0
	ldrb r1, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _08099190  @ =0x000016EC
	add r7, r4, r3
	strb r1, [r7]
	ldr r0, _08099194  @ =0x000016C4
	add r0, r0, r4
	mov r8, r0
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #4
	add r5, r4, r3
	strb r1, [r5]
	ldr r1, _08099198  @ =0x000016C1
	add r0, r4, r1
	ldrb r1, [r0]
	add r2, r2, #3
	add r0, r4, r2
	strb r1, [r0]
	sub r3, r3, #3
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _0809919C  @ =0x000016C5
	add r0, r4, r1
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #4
	add r0, r4, r3
	strb r1, [r0]
	bl sub_080972EC
	bl sub_080973A8
	ldr r0, _080991A0  @ =0x00001783
	add r4, r4, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _0809913E
	bl sub_08097548
_0809913E:
	mov r1, r9
	ldrb r0, [r1]
	ldrb r1, [r7]
	sub r0, r0, r1
	ldr r2, _08099164  @ =0x000016D6
	add r1, r6, r2
	strb r0, [r1]
	mov r3, r8
	ldrb r0, [r3]
	ldrb r1, [r5]
	sub r0, r0, r1
	add r2, r2, #1
	add r1, r6, r2
	strb r0, [r1]
	bl sub_0809407C
	bl sub_0809E394
	b _080992FE
_08099164:
	.4byte 0x000016D6
_08099168:
	.4byte 0x000016D7
_0809916C:
	.4byte 0x0000177F
_08099170:
	.4byte 0x000016E8
_08099174:
	.4byte 0x00000545
_08099178:
	.4byte gRam
_0809917C:
	.4byte 0x000016D5
_08099180:
	.4byte gUnknown_08167E4A
_08099184:
	.4byte 0x000016CC
_08099188:
	.4byte 0x00001727
_0809918C:
	.4byte 0x0000172B
_08099190:
	.4byte 0x000016EC
_08099194:
	.4byte 0x000016C4
_08099198:
	.4byte 0x000016C1
_0809919C:
	.4byte 0x000016C5
_080991A0:
	.4byte 0x00001783
_080991A4:
	ldr r4, _08099264  @ =gRam
	ldr r3, _08099268  @ =0x000016D4
	add r1, r4, r3
	ldrb r0, [r1]
	cmp r0, #5
	bls _080991B4
	mov r0, #0
	strb r0, [r1]
_080991B4:
	ldr r0, _0809926C  @ =0x0000177F
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	mov r5, #0
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #31
	bhi _080991CC
	mov r0, #32
	strb r0, [r1]
_080991CC:
	mov r0, #0
	mov r1, #30
	bl sub_080AE5B8
	ldr r1, _08099270  @ =0x00001739
	add r0, r4, r1
	strb r5, [r0]
	ldr r0, _08099274  @ =gSword
	ldrb r0, [r0]
	add r0, r0, #1
	mov r1, #254
	and r0, r0, r1
	cmp r0, #0
	beq _080991EE
	mov r0, #7
	bl sub_0809EEB4
_080991EE:
	ldr r2, _08099278  @ =0x0000165E
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809920C
	ldr r3, _0809927C  @ =0x000016E8
	add r2, r4, r3
	ldrb r0, [r2]
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r2]
	ldr r0, _08099280  @ =0x000016EA
	add r1, r4, r0
	mov r0, #9
	strb r0, [r1]
_0809920C:
	ldr r1, _08099284  @ =0x000016F8
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _08099288  @ =0x000016D5
	add r0, r4, r2
	ldrb r0, [r0]
	lsr r2, r0, #1
	ldr r1, _0809928C  @ =gUnknown_08167E4A
	add r0, r2, r1
	ldrb r0, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r2, r4, r3
	strb r0, [r2]
	ldr r3, _08099290  @ =0x00000545
	add r0, r4, r3
	ldrb r0, [r0]
	mov r3, #15
	and r3, r3, r0
	cmp r3, #0
	beq _0809929C
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r3, r0
	beq _0809929C
	ldr r0, _08099294  @ =0x00001718
	add r1, r4, r0
	mov r0, #18
	strb r0, [r1]
	ldr r1, _0809927C  @ =0x000016E8
	add r2, r4, r1
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	ldr r2, _08099280  @ =0x000016EA
	add r0, r4, r2
	strb r5, [r0]
	ldr r3, _08099298  @ =0x000016EB
	add r0, r4, r3
	strb r5, [r0]
	bl sub_08098DA8
	b _080992FE
_08099264:
	.4byte gRam
_08099268:
	.4byte 0x000016D4
_0809926C:
	.4byte 0x0000177F
_08099270:
	.4byte 0x00001739
_08099274:
	.4byte gSword
_08099278:
	.4byte 0x0000165E
_0809927C:
	.4byte 0x000016E8
_08099280:
	.4byte 0x000016EA
_08099284:
	.4byte 0x000016F8
_08099288:
	.4byte 0x000016D5
_0809928C:
	.4byte gUnknown_08167E4A
_08099290:
	.4byte 0x00000545
_08099294:
	.4byte 0x00001718
_08099298:
	.4byte 0x000016EB
_0809929C:
	ldr r5, _0809930C  @ =gRam
	ldr r2, _08099310  @ =0x000016FC
	add r0, r5, r2
	ldrb r0, [r0]
	mov r6, #15
	add r3, r6, #0
	and r3, r3, r0
	cmp r3, #0
	bne _080992BA
	ldr r3, _08099314  @ =0x000016D5
	add r0, r5, r3
	ldrb r0, [r0]
	lsr r2, r0, #1
	add r0, r2, r1
	ldrb r3, [r0]
_080992BA:
	ldr r0, _08099318  @ =0x00001727
	add r4, r5, r0
	strb r3, [r4]
	ldr r1, _0809931C  @ =0x000016CC
	add r0, r5, r1
	strb r3, [r0]
	bl sub_080943CC
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _080992DA
	bl sub_0809380C
	bl sub_08094460
_080992DA:
	ldrb r1, [r4]
	add r0, r6, #0
	and r0, r0, r1
	strb r0, [r4]
	bl sub_0809380C
	bl sub_080975B4
	bl sub_0809407C
	bl sub_08096F30
	ldr r2, _08099320  @ =0x0000178B
	add r1, r5, r2
	mov r0, #0
	strb r0, [r1]
	bl sub_0809E394
_080992FE:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809930C:
	.4byte gRam
_08099310:
	.4byte 0x000016FC
_08099314:
	.4byte 0x000016D5
_08099318:
	.4byte 0x00001727
_0809931C:
	.4byte 0x000016CC
_08099320:
	.4byte 0x0000178B
	THUMB_FUNC_END sub_08098E1C

