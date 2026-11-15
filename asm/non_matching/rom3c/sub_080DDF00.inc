	THUMB_FUNC_START sub_080DDF00
sub_080DDF00: @ 0x080DDF00
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080DDF58  @ =gRam
	ldr r0, _080DDF5C  @ =0x00001172
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r3, #0
	add r5, r2, #0
	ldr r1, _080DDF60  @ =0x000009DA
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _080DDF64  @ =gUnknown_08176370
_080DDF20:
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r1, r0
	beq _080DDF32
	add r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	bne _080DDF20
_080DDF32:
	ldr r1, _080DDF68  @ =0x00001052
	add r0, r5, r1
	add r2, r4, r0
	strb r3, [r2]
	cmp r3, #0
	bne _080DDF52
	ldr r1, _080DDF6C  @ =0x00000F02
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080DDF52
	add r0, r3, #1
	strb r0, [r2]
_080DDF52:
	pop {r4,r5}
	pop {r0}
	bx r0
_080DDF58:
	.4byte gRam
_080DDF5C:
	.4byte 0x00001172
_080DDF60:
	.4byte 0x000009DA
_080DDF64:
	.4byte gUnknown_08176370
_080DDF68:
	.4byte 0x00001052
_080DDF6C:
	.4byte 0x00000F02
	THUMB_FUNC_END sub_080DDF00

