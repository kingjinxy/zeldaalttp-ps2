	THUMB_FUNC_START sub_080C8B2C
sub_080C8B2C: @ 0x080C8B2C
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080C8B58  @ =gRam
	ldr r3, _080C8B5C  @ =0x00000FF2
	add r0, r1, r3
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #19
	bne _080C8B64
	sub r3, r3, #96
	add r0, r1, r3
	add r0, r2, r0
	ldrb r1, [r0]
	lsl r1, r1, #3
	ldr r0, _080C8B60  @ =gUnknown_081725BC
	add r1, r1, r0
	add r0, r2, #0
	mov r2, #1
	bl sub_080C9480
	b _080C8B7A
_080C8B58:
	.4byte gRam
_080C8B5C:
	.4byte 0x00000FF2
_080C8B60:
	.4byte gUnknown_081725BC
_080C8B64:
	ldr r3, _080C8B80  @ =0x00000F92
	add r0, r1, r3
	add r0, r2, r0
	ldrb r1, [r0]
	lsl r1, r1, #3
	ldr r0, _080C8B84  @ =gUnknown_0817258C
	add r1, r1, r0
	add r0, r2, #0
	mov r2, #1
	bl sub_080C9480
_080C8B7A:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C8B80:
	.4byte 0x00000F92
_080C8B84:
	.4byte gUnknown_0817258C
	THUMB_FUNC_END sub_080C8B2C

