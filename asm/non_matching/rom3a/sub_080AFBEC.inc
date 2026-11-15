	THUMB_FUNC_START sub_080AFBEC
sub_080AFBEC: @ 0x080AFBEC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r6, r0, #24
	str r6, [sp, #4]
	mov r0, #0
	str r0, [sp]
	ldr r7, _080AFD40  @ =gRam
	ldr r1, _080AFD44  @ =0x000016C1
	add r0, r7, r1
	ldrb r1, [r0]
	ldr r2, _080AFD48  @ =0x000016ED
	add r0, r7, r2
	strb r1, [r0]
	ldr r3, _080AFD4C  @ =0x000016C5
	add r0, r7, r3
	ldrb r1, [r0]
	ldr r4, _080AFD50  @ =0x000016F1
	add r0, r7, r4
	strb r1, [r0]
	ldr r1, _080AFD54  @ =0x000016CD
	add r0, r7, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	ble _080AFC2C
	mov r6, #2
_080AFC2C:
	cmp r0, #0
	bge _080AFC32
	mov r6, #0
_080AFC32:
	ldr r2, _080AFD58  @ =0x000016CE
	add r0, r7, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	ble _080AFC42
	mov r6, #6
_080AFC42:
	cmp r0, #0
	bge _080AFC48
	mov r6, #4
_080AFC48:
	lsr r5, r6, #1
	add r0, r5, #0
	bl sub_080AFAE8
	ldr r0, _080AFD5C  @ =gUnknown_0816E89E
	lsl r4, r5, #1
	add r0, r4, r0
	ldr r3, _080AFD60  @ =gUnknown_03002BA8
	ldrh r1, [r3]
	ldrh r0, [r0]
	add r0, r1, r0
	ldr r2, _080AFD64  @ =gUnknown_03002B90
	strh r0, [r2]
	ldr r0, _080AFD68  @ =gUnknown_0816E8A6
	add r0, r4, r0
	ldrh r0, [r0]
	add r1, r1, r0
	ldr r3, _080AFD6C  @ =gUnknown_03002B94
	strh r1, [r3]
	ldr r0, _080AFD70  @ =0x0000097C
	add r0, r0, r7
	mov r10, r0
	ldr r0, _080AFD74  @ =gUnknown_0816E8B6
	add r0, r4, r0
	mov r2, r10
	ldrh r1, [r2]
	ldrh r0, [r0]
	add r0, r1, r0
	ldr r3, _080AFD78  @ =0x00000968
	add r3, r3, r7
	mov r8, r3
	strh r0, [r3]
	ldr r0, _080AFD7C  @ =gUnknown_0816E8BE
	add r0, r4, r0
	ldrh r0, [r0]
	add r1, r1, r0
	ldr r0, _080AFD80  @ =0x0000096C
	add r0, r0, r7
	mov r9, r0
	strh r1, [r0]
	add r0, r5, #0
	mov r1, sp
	bl sub_080AFB68
	ldr r0, _080AFD84  @ =gUnknown_0816E896
	add r0, r4, r0
	ldrh r0, [r0]
	ldr r1, _080AFD60  @ =gUnknown_03002BA8
	ldrh r1, [r1]
	add r0, r0, r1
	mov r2, #151
	lsl r2, r2, #4
	add r1, r7, r2
	strh r0, [r1]
	ldr r0, _080AFD88  @ =gUnknown_0816E8AE
	add r4, r4, r0
	ldrh r0, [r4]
	mov r3, r10
	ldrh r3, [r3]
	add r0, r0, r3
	ldr r4, _080AFD8C  @ =0x00000974
	add r1, r7, r4
	strh r0, [r1]
	ldr r0, _080AFD90  @ =0x000016FA
	add r2, r7, r0
	ldrb r1, [r2]
	mov r0, #251
	and r0, r0, r1
	strb r0, [r2]
	mov r1, sp
	ldrh r2, [r1, #4]
	mov r1, r10
	strh r2, [r1]
	ldr r3, _080AFD64  @ =gUnknown_03002B90
	mov r4, #0
	ldrsh r1, [r3, r4]
	mov r0, r8
	mov r3, #0
	ldrsh r2, [r0, r3]
	cmp r1, r2
	blt _080AFCF4
	mov r4, r9
	mov r3, #0
	ldrsh r0, [r4, r3]
	cmp r1, r0
	blt _080AFD0C
_080AFCF4:
	ldr r4, _080AFD6C  @ =gUnknown_03002B94
	mov r0, #0
	ldrsh r1, [r4, r0]
	cmp r1, r2
	bge _080AFD00
	b _080AFE2E
_080AFD00:
	mov r2, r9
	mov r3, #0
	ldrsh r0, [r2, r3]
	cmp r1, r0
	blt _080AFD0C
	b _080AFE2E
_080AFD0C:
	ldr r1, _080AFD40  @ =gRam
	ldr r4, _080AFD94  @ =0x000016D5
	add r2, r1, r4
	ldr r3, _080AFD70  @ =0x0000097C
	add r0, r1, r3
	mov r3, #0
	ldrsh r4, [r0, r3]
	ldr r3, _080AFD98  @ =0x00001A48
	add r0, r1, r3
	add r0, r4, r0
	ldrb r2, [r2]
	add r3, r1, #0
	ldrb r0, [r0]
	cmp r2, r0
	bne _080AFDAC
	ldr r1, _080AFD9C  @ =0x00001A4A
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080AFDA0
	ldr r4, _080AFD90  @ =0x000016FA
	add r2, r3, r4
	ldrb r1, [r2]
	mov r0, #4
	b _080AFDA8
_080AFD40:
	.4byte gRam
_080AFD44:
	.4byte 0x000016C1
_080AFD48:
	.4byte 0x000016ED
_080AFD4C:
	.4byte 0x000016C5
_080AFD50:
	.4byte 0x000016F1
_080AFD54:
	.4byte 0x000016CD
_080AFD58:
	.4byte 0x000016CE
_080AFD5C:
	.4byte gUnknown_0816E89E
_080AFD60:
	.4byte gUnknown_03002BA8
_080AFD64:
	.4byte gUnknown_03002B90
_080AFD68:
	.4byte gUnknown_0816E8A6
_080AFD6C:
	.4byte gUnknown_03002B94
_080AFD70:
	.4byte 0x0000097C
_080AFD74:
	.4byte gUnknown_0816E8B6
_080AFD78:
	.4byte 0x00000968
_080AFD7C:
	.4byte gUnknown_0816E8BE
_080AFD80:
	.4byte 0x0000096C
_080AFD84:
	.4byte gUnknown_0816E896
_080AFD88:
	.4byte gUnknown_0816E8AE
_080AFD8C:
	.4byte 0x00000974
_080AFD90:
	.4byte 0x000016FA
_080AFD94:
	.4byte 0x000016D5
_080AFD98:
	.4byte 0x00001A48
_080AFD9C:
	.4byte 0x00001A4A
_080AFDA0:
	ldr r0, _080AFDD4  @ =0x000016FA
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #1
_080AFDA8:
	orr r0, r0, r1
	strb r0, [r2]
_080AFDAC:
	mov r0, #2
	and r0, r0, r6
	cmp r0, #0
	beq _080AFDDC
	mov r1, #151
	lsl r1, r1, #4
	add r0, r3, r1
	mov r2, #0
	ldrsh r1, [r0, r2]
	ldr r4, _080AFDD8  @ =0x00000974
	add r0, r3, r4
	mov r2, #0
	ldrsh r0, [r0, r2]
	sub r1, r1, r0
	cmp r1, #0
	blt _080AFE2E
	cmp r1, #8
	bgt _080AFE2E
	b _080AFDF4
	.byte 0x00
	.byte 0x00
_080AFDD4:
	.4byte 0x000016FA
_080AFDD8:
	.4byte 0x00000974
_080AFDDC:
	mov r1, #151
	lsl r1, r1, #4
	add r0, r3, r1
	mov r2, #0
	ldrsh r1, [r0, r2]
	ldr r4, _080AFE14  @ =0x00000974
	add r0, r3, r4
	mov r2, #0
	ldrsh r0, [r0, r2]
	sub r1, r1, r0
	cmp r1, #0
	bge _080AFE2E
_080AFDF4:
	neg r2, r1
	sub r4, r4, #20
	add r0, r3, r4
	strh r2, [r0]
	ldr r1, [sp]
	ldrh r0, [r1]
	add r0, r0, r2
	strh r0, [r1]
	mov r0, #4
	and r6, r6, r0
	cmp r6, #0
	beq _080AFE1C
	ldr r0, _080AFE18  @ =0x000016D7
	add r1, r3, r0
	b _080AFE20
	.byte 0x00
	.byte 0x00
_080AFE14:
	.4byte 0x00000974
_080AFE18:
	.4byte 0x000016D7
_080AFE1C:
	ldr r4, _080AFE44  @ =0x000016D6
	add r1, r3, r4
_080AFE20:
	mov r2, #150
	lsl r2, r2, #4
	add r0, r3, r2
	ldrb r0, [r0]
	ldrb r3, [r1]
	add r0, r0, r3
	strb r0, [r1]
_080AFE2E:
	bl sub_0809E394
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
_080AFE44:
	.4byte 0x000016D6
	THUMB_FUNC_END sub_080AFBEC

