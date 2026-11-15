	THUMB_FUNC_START sub_080C3BD0
sub_080C3BD0: @ 0x080C3BD0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080C3C64  @ =gRam
	ldr r1, _080C3C68  @ =0x000017AA
	add r0, r4, r1
	ldr r2, _080C3C6C  @ =0x0000180D
	add r1, r4, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _080C3C5C
	ldr r0, _080C3C70  @ =0x000016F8
	add r1, r4, r0
	mov r0, #19
	strb r0, [r1]
	add r0, r5, #0
	mov r1, #24
	bl sub_080C4378
	ldr r2, _080C3C74  @ =0x00001702
	add r1, r4, r2
	mov r0, #1
	strb r0, [r1]
	ldr r3, _080C3C78  @ =gUnknown_08171E70
	ldr r2, _080C3C7C  @ =gArmor
	ldr r1, _080C3C80  @ =0x00000EA5
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	mov r1, #15
	and r1, r1, r0
	lsl r0, r1, #1
	add r0, r0, r1
	ldrb r2, [r2]
	add r0, r0, r2
	add r0, r0, r3
	ldrb r1, [r0]
	ldr r2, _080C3C84  @ =0x00001805
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _080C3C88  @ =0x00000FF2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #97
	bne _080C3C5C
	ldr r2, _080C3C8C  @ =0x00000F82
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C3C5C
	sub r1, r1, #208
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #1
	ldr r2, _080C3C90  @ =0x000016CE
	add r1, r4, r2
	strb r0, [r1]
	ldr r1, _080C3C94  @ =0x00000F12
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #1
	sub r2, r2, #1
	add r1, r4, r2
	strb r0, [r1]
_080C3C5C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C3C64:
	.4byte gRam
_080C3C68:
	.4byte 0x000017AA
_080C3C6C:
	.4byte 0x0000180D
_080C3C70:
	.4byte 0x000016F8
_080C3C74:
	.4byte 0x00001702
_080C3C78:
	.4byte gUnknown_08171E70
_080C3C7C:
	.4byte gArmor
_080C3C80:
	.4byte 0x00000EA5
_080C3C84:
	.4byte 0x00001805
_080C3C88:
	.4byte 0x00000FF2
_080C3C8C:
	.4byte 0x00000F82
_080C3C90:
	.4byte 0x000016CE
_080C3C94:
	.4byte 0x00000F12
	THUMB_FUNC_END sub_080C3BD0

