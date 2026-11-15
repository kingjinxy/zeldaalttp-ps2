	THUMB_FUNC_START sub_080B6E6C
sub_080B6E6C: @ 0x080B6E6C
	push {r4,r5,lr}
	ldr r4, _080B6EF4  @ =gRam
	ldr r1, _080B6EF8  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080B6EA6
	ldr r2, _080B6EFC  @ =0x00000A32
	add r1, r4, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r0, _080B6F00  @ =0x00000A2E
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	sub r2, r2, #2
	add r1, r4, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r0, _080B6F04  @ =0x00000A2C
	add r1, r4, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
_080B6EA6:
	ldr r5, _080B6F08  @ =gUnknown_02006887
	ldrb r0, [r5]
	cmp r0, #0
	beq _080B6EBE
	bl sub_080B7F6C
	mov r0, #0
	strb r0, [r5]
	ldr r1, _080B6F0C  @ =gUnknown_02006886
	ldrb r0, [r1]
	add r0, r0, #2
	strb r0, [r1]
_080B6EBE:
	ldr r1, _080B6F10  @ =0x00000544
	add r0, r4, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _080B6F14  @ =0x00000546
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	bl sub_081295CC
	bl sub_081296B8
	cmp r0, #0
	beq _080B6EEE
	ldr r1, _080B6F18  @ =gUnknown_02006883
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	sub r1, r1, #1
	ldrb r0, [r1]
	sub r0, r0, #3
	strb r0, [r1]
_080B6EEE:
	pop {r4,r5}
	pop {r0}
	bx r0
_080B6EF4:
	.4byte gRam
_080B6EF8:
	.4byte 0x00000996
_080B6EFC:
	.4byte 0x00000A32
_080B6F00:
	.4byte 0x00000A2E
_080B6F04:
	.4byte 0x00000A2C
_080B6F08:
	.4byte gUnknown_02006887
_080B6F0C:
	.4byte gUnknown_02006886
_080B6F10:
	.4byte 0x00000544
_080B6F14:
	.4byte 0x00000546
_080B6F18:
	.4byte gUnknown_02006883
	THUMB_FUNC_END sub_080B6E6C

