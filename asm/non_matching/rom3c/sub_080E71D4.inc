	THUMB_FUNC_START sub_080E71D4
sub_080E71D4: @ 0x080E71D4
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r2, #0
	mov r1, #0
	mov r0, sp
	strb r1, [r0]
	ldr r0, _080E721C  @ =gRam
	ldr r1, _080E7220  @ =0x00000F52
	add r0, r0, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E7202
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E7212
_080E7202:
	ldr r1, _080E7224  @ =gUnknown_081777D4
	add r0, r4, #0
	mov r2, #2
	bl sub_080C9480
	add r0, r4, #0
	bl sub_080C6230
_080E7212:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E721C:
	.4byte gRam
_080E7220:
	.4byte 0x00000F52
_080E7224:
	.4byte gUnknown_081777D4
	THUMB_FUNC_END sub_080E71D4

