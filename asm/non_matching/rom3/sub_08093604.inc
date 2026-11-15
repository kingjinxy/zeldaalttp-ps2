	THUMB_FUNC_START sub_08093604
sub_08093604: @ 0x08093604
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r4, _080936D4  @ =gRam
	ldr r0, _080936D8  @ =0x000016C1
	add r6, r4, r0
	ldrb r0, [r6]
	ldr r1, _080936DC  @ =0x000016D9
	add r1, r1, r4
	mov r9, r1
	strb r0, [r1]
	mov r2, #182
	lsl r2, r2, #5
	add r5, r4, r2
	ldrb r1, [r5]
	ldr r0, _080936E0  @ =0x000016D8
	add r7, r4, r0
	strb r1, [r7]
	add r2, r2, #44
	add r2, r2, r4
	mov r10, r2
	ldrb r0, [r2]
	sub r1, r1, r0
	ldr r2, _080936E4  @ =0x000016D6
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _080936E8  @ =0x00001726
	add r0, r0, r4
	mov r8, r0
	ldrb r1, [r0]
	lsl r1, r1, #25
	lsr r3, r1, #24
	ldr r0, _080936EC  @ =gUnknown_08167CD8
	add r1, r3, #0
	add r1, r1, r0
	ldrh r0, [r5]
	ldrh r1, [r1]
	add r0, r0, r1
	strh r0, [r5]
	add r0, r3, #0
	bl sub_0809EA40
	ldr r1, _080936F0  @ =0x000017D2
	add r0, r4, r1
	ldrb r0, [r0]
	ldr r2, _080936F4  @ =0x000017EC
	add r1, r4, r2
	ldrb r1, [r1]
	orr r0, r0, r1
	sub r2, r2, #4
	add r1, r4, r2
	ldrb r1, [r1]
	orr r0, r0, r1
	sub r2, r2, #24
	add r1, r4, r2
	ldrb r1, [r1]
	orr r0, r0, r1
	mov r1, #7
	and r0, r0, r1
	cmp r0, #7
	beq _08093708
	mov r1, r9
	ldrb r0, [r1]
	strb r0, [r6]
	ldrb r0, [r7]
	strb r0, [r5]
	mov r3, #0
	sub r2, r2, #216
	add r1, r4, r2
	mov r0, #1
	strb r0, [r1]
	ldr r6, _080936F8  @ =0x000016CE
	add r5, r4, r6
	ldrb r1, [r5]
	mov r0, #0
	ldrsb r0, [r5, r0]
	cmp r0, #0
	bge _080936AC
	mov r3, #255
	neg r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
_080936AC:
	lsr r1, r1, #4
	ldr r0, _080936FC  @ =gUnknown_08167CEE
	add r0, r1, r0
	ldrb r2, [r0]
	ldr r6, _08093700  @ =0x000017F3
	add r0, r4, r6
	strb r2, [r0]
	add r6, r6, #1
	add r0, r4, r6
	strb r2, [r0]
	ldr r0, _08093704  @ =gUnknown_08167CF6
	add r1, r1, r0
	ldrb r1, [r1]
	cmp r3, #255
	bne _080936D0
	neg r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
_080936D0:
	strb r1, [r5]
	b _0809375E
_080936D4:
	.4byte gRam
_080936D8:
	.4byte 0x000016C1
_080936DC:
	.4byte 0x000016D9
_080936E0:
	.4byte 0x000016D8
_080936E4:
	.4byte 0x000016D6
_080936E8:
	.4byte 0x00001726
_080936EC:
	.4byte gUnknown_08167CD8
_080936F0:
	.4byte 0x000017D2
_080936F4:
	.4byte 0x000017EC
_080936F8:
	.4byte 0x000016CE
_080936FC:
	.4byte gUnknown_08167CEE
_08093700:
	.4byte 0x000017F3
_08093704:
	.4byte gUnknown_08167CF6
_08093708:
	mov r1, r8
	ldrb r0, [r1]
	lsl r0, r0, #25
	ldr r1, _08093788  @ =gUnknown_08167CDC
	lsr r0, r0, #24
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r2, [r5]
	add r3, r0, r2
	strh r3, [r5]
	ldrb r0, [r5]
	mov r1, r10
	strb r0, [r1]
	ldrb r1, [r6]
	ldr r2, _0809378C  @ =0x000016ED
	add r0, r4, r2
	strb r1, [r0]
	ldr r6, _08093790  @ =0x000016F8
	add r1, r4, r6
	mov r0, #1
	strb r0, [r1]
	ldr r0, _08093794  @ =0x000016C8
	add r5, r4, r0
	ldrb r1, [r5]
	cmp r1, #255
	bne _0809373E
	mov r1, #0
_0809373E:
	mov r6, #150
	lsl r6, r6, #4
	add r2, r4, r6
	strb r1, [r2]
	ldr r0, _08093798  @ =0x00000961
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
	ldrh r0, [r7]
	sub r0, r3, r0
	ldrh r2, [r2]
	add r0, r0, r2
	ldr r2, _0809379C  @ =0x000017F6
	add r1, r4, r2
	strh r0, [r1]
	strh r0, [r5]
_0809375E:
	ldr r2, _080937A0  @ =gRam
	ldr r6, _080937A4  @ =0x000017D0
	add r0, r2, r6
	ldrh r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _0809377A
	ldr r0, _080937A8  @ =0x00001702
	add r1, r2, r0
	mov r0, #2
	strb r0, [r1]
	bl sub_080937AC
_0809377A:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08093788:
	.4byte gUnknown_08167CDC
_0809378C:
	.4byte 0x000016ED
_08093790:
	.4byte 0x000016F8
_08093794:
	.4byte 0x000016C8
_08093798:
	.4byte 0x00000961
_0809379C:
	.4byte 0x000017F6
_080937A0:
	.4byte gRam
_080937A4:
	.4byte 0x000017D0
_080937A8:
	.4byte 0x00001702
	THUMB_FUNC_END sub_08093604

