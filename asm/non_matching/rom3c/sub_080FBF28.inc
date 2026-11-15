	THUMB_FUNC_START sub_080FBF28
sub_080FBF28: @ 0x080FBF28
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080FBF58  @ =gRam
	ldr r2, _080FBF5C  @ =0x00000FE2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r2, [r0]
	add r5, r1, #0
	cmp r2, #0
	bne _080FBF68
	ldr r1, _080FBF60  @ =gUnknown_0817A750
	ldr r3, _080FBF64  @ =0x00000F52
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	b _080FBFC4
	.byte 0x00
	.byte 0x00
_080FBF58:
	.4byte gRam
_080FBF5C:
	.4byte 0x00000FE2
_080FBF60:
	.4byte gUnknown_0817A750
_080FBF64:
	.4byte 0x00000F52
_080FBF68:
	mov r1, #0
	ldr r3, _080FBF98  @ =0x000009DA
	add r0, r5, r3
	ldrh r0, [r0]
	cmp r0, #105
	bne _080FBF76
	mov r1, #1
_080FBF76:
	cmp r1, #0
	beq _080FBFA0
	ldr r1, _080FBF9C  @ =0x00001062
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #3
	bne _080FBFA0
	cmp r2, #32
	beq _080FBF8E
	cmp r2, #64
	bne _080FBFC4
_080FBF8E:
	add r0, r4, #0
	bl sub_080FBE88
	b _080FBFC4
	.byte 0x00
	.byte 0x00
_080FBF98:
	.4byte 0x000009DA
_080FBF9C:
	.4byte 0x00001062
_080FBFA0:
	ldr r2, _080FBFCC  @ =0x00000FE2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #64
	bne _080FBFC4
	add r0, r4, #0
	bl sub_080FD684
	ldr r3, _080FBFD0  @ =0x00000F82
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #2
	bls _080FBFC4
	add r0, r4, #0
	bl sub_080FCFA8
_080FBFC4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FBFCC:
	.4byte 0x00000FE2
_080FBFD0:
	.4byte 0x00000F82
	THUMB_FUNC_END sub_080FBF28

