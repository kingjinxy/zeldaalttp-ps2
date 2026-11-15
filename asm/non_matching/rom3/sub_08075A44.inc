	THUMB_FUNC_START sub_08075A44
sub_08075A44: @ 0x08075A44
	push {lr}
	ldr r0, _08075A5C  @ =gRam
	ldr r1, _08075A60  @ =0x000009B2
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _08075A64
	bl sub_0807407C
	b _08075A68
_08075A5C:
	.4byte gRam
_08075A60:
	.4byte 0x000009B2
_08075A64:
	bl sub_08070BDC
_08075A68:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08075A44

