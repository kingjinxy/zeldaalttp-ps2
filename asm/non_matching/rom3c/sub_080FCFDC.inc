	THUMB_FUNC_START sub_080FCFDC
sub_080FCFDC: @ 0x080FCFDC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080FD018
	ldr r1, _080FD00C  @ =gRam
	ldr r2, _080FD010  @ =0x00000FC2
	add r0, r1, r2
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _080FD006
	mov r0, #32
	strb r0, [r2]
	ldr r0, _080FD014  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080FD006:
	pop {r4}
	pop {r0}
	bx r0
_080FD00C:
	.4byte gRam
_080FD010:
	.4byte 0x00000FC2
_080FD014:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FCFDC

