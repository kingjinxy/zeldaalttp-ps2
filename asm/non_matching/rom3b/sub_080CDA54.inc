	THUMB_FUNC_START sub_080CDA54
sub_080CDA54: @ 0x080CDA54
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_080CD8BC
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r12, r0
	cmp r0, #0
	bne _080CDACE
	ldr r6, _080CDAD8  @ =gRam
	ldr r1, _080CDADC  @ =0x000012FE
	add r0, r6, r1
	add r0, r5, r0
	ldrb r4, [r0]
	lsr r4, r4, #2
	ldr r0, _080CDAE0  @ =gUnknown_03003E74
	ldrh r0, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	ldrb r1, [r1]
	ldr r2, _080CDAE4  @ =gUnknown_08172DEC
	add r2, r4, r2
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r1, r1, r3
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r7, _080CDAE8  @ =0x00000964
	add r2, r6, r7
	ldrb r2, [r2]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080CDAEC  @ =gUnknown_08172DEF
	add r4, r4, r3
	ldrb r3, [r4]
	ldr r7, _080CDAF0  @ =0x0000131C
	add r4, r6, r7
	add r4, r5, r4
	ldrb r5, [r4]
	ldr r7, _080CDAF4  @ =0x00001122
	add r4, r6, r7
	add r4, r5, r4
	ldr r7, _080CDAF8  @ =0x00000D94
	add r6, r6, r7
	add r5, r5, r6
	ldrb r4, [r4]
	ldrb r5, [r5]
	orr r4, r4, r5
	mov r5, #254
	and r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, r12
	str r4, [sp]
	bl sub_080C6004
_080CDACE:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CDAD8:
	.4byte gRam
_080CDADC:
	.4byte 0x000012FE
_080CDAE0:
	.4byte gUnknown_03003E74
_080CDAE4:
	.4byte gUnknown_08172DEC
_080CDAE8:
	.4byte 0x00000964
_080CDAEC:
	.4byte gUnknown_08172DEF
_080CDAF0:
	.4byte 0x0000131C
_080CDAF4:
	.4byte 0x00001122
_080CDAF8:
	.4byte 0x00000D94
	THUMB_FUNC_END sub_080CDA54

