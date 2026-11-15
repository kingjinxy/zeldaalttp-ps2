	THUMB_FUNC_START sub_080CDC60
sub_080CDC60: @ 0x080CDC60
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _080CDD6C  @ =gRam
	ldr r1, _080CDD70  @ =0x000012FE
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #30
	bne _080CDCCE
	ldr r2, _080CDD74  @ =0x000009AD
	add r0, r3, r2
	ldr r5, _080CDD78  @ =0x00001605
	add r1, r3, r5
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _080CDCCE
	ldr r1, _080CDD7C  @ =0x0000122C
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r3, r2
	strb r1, [r0]
	ldr r5, _080CDD80  @ =0x00001268
	add r0, r3, r5
	add r0, r4, r0
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r3, r2
	strb r1, [r0]
	sub r5, r5, #90
	add r0, r3, r5
	add r0, r4, r0
	ldrb r0, [r0]
	ldr r1, _080CDD84  @ =0x00000964
	add r2, r3, r1
	strb r0, [r2]
	add r5, r5, #60
	add r0, r3, r5
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r5, _080CDD88  @ =0x00000965
	add r0, r3, r5
	strb r1, [r0]
	ldrh r0, [r2]
	sub r0, r0, #16
	strh r0, [r2]
	mov r0, #4
	bl sub_08079844
_080CDCCE:
	ldr r2, _080CDD6C  @ =gRam
	ldr r1, _080CDD70  @ =0x000012FE
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsr r5, r0, #3
	ldr r3, _080CDD7C  @ =0x0000122C
	add r0, r2, r3
	add r0, r4, r0
	ldrb r1, [r0]
	add r3, r3, #60
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080CDD8C  @ =0x00000952
	add r0, r2, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	lsl r1, r1, #16
	lsr r6, r1, #16
	mov r7, #255
	lsl r7, r7, #8
	add r0, r6, #0
	and r0, r0, r7
	cmp r0, #0
	bne _080CDD62
	ldr r1, _080CDD90  @ =0x0000120E
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r3, _080CDD94  @ =0x0000124A
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080CDD98  @ =0x00000958
	add r0, r2, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	lsl r1, r1, #16
	lsr r3, r1, #16
	add r0, r3, #0
	and r0, r0, r7
	cmp r0, #0
	bne _080CDD62
	ldr r0, _080CDD9C  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldr r1, _080CDDA0  @ =gUnknown_08172E1E
	add r1, r5, r1
	ldrb r2, [r1]
	add r1, r6, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r2, r3, r2
	sub r2, r2, #16
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080CDDA4  @ =gUnknown_08172E0F
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080CDDA8  @ =gUnknown_08172E14
	add r4, r5, r4
	ldrb r4, [r4]
	lsl r4, r4, #8
	orr r3, r3, r4
	ldr r4, _080CDDAC  @ =gUnknown_08172E19
	add r4, r5, r4
	ldrb r4, [r4]
	str r4, [sp]
	bl sub_080C6368
_080CDD62:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CDD6C:
	.4byte gRam
_080CDD70:
	.4byte 0x000012FE
_080CDD74:
	.4byte 0x000009AD
_080CDD78:
	.4byte 0x00001605
_080CDD7C:
	.4byte 0x0000122C
_080CDD80:
	.4byte 0x00001268
_080CDD84:
	.4byte 0x00000964
_080CDD88:
	.4byte 0x00000965
_080CDD8C:
	.4byte 0x00000952
_080CDD90:
	.4byte 0x0000120E
_080CDD94:
	.4byte 0x0000124A
_080CDD98:
	.4byte 0x00000958
_080CDD9C:
	.4byte gUnknown_03003E74
_080CDDA0:
	.4byte gUnknown_08172E1E
_080CDDA4:
	.4byte gUnknown_08172E0F
_080CDDA8:
	.4byte gUnknown_08172E14
_080CDDAC:
	.4byte gUnknown_08172E19
	THUMB_FUNC_END sub_080CDC60

