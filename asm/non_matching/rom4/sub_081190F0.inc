	THUMB_FUNC_START sub_081190F0
sub_081190F0: @ 0x081190F0
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _0811910C  @ =gRam
	ldr r1, _08119110  @ =0x00001827
	add r0, r0, r1
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _08119114
	add r0, r2, #0
	bl sub_08118C0C
	b _08119118
_0811910C:
	.4byte gRam
_08119110:
	.4byte 0x00001827
_08119114:
	sub r0, r0, #1
	strb r0, [r1]
_08119118:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081190F0

