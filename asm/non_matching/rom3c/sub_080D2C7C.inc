	THUMB_FUNC_START sub_080D2C7C
sub_080D2C7C: @ 0x080D2C7C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r0, _080D2CBC  @ =gUnknown_020022D8
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	bne _080D2CCC
	ldr r1, _080D2CC0  @ =gRam
	ldr r0, _080D2CC4  @ =0x00000EE2
	add r4, r1, r0
	add r4, r5, r4
	ldrb r2, [r4]
	add r0, r0, #32
	add r3, r1, r0
	add r3, r5, r3
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r2, r2, #8
	ldr r0, _080D2CC8  @ =0x00001172
	add r1, r1, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	strb r2, [r4]
	lsr r2, r2, #8
	strb r2, [r3]
	b _080D2CD8
	.byte 0x00
	.byte 0x00
_080D2CBC:
	.4byte gUnknown_020022D8
_080D2CC0:
	.4byte gRam
_080D2CC4:
	.4byte 0x00000EE2
_080D2CC8:
	.4byte 0x00001172
_080D2CCC:
	ldr r0, _080D2CE0  @ =gRam
	ldr r1, _080D2CE4  @ =0x00000FA2
	add r0, r0, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
_080D2CD8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D2CE0:
	.4byte gRam
_080D2CE4:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080D2C7C

