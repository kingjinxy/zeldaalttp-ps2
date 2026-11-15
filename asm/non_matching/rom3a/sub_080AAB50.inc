	THUMB_FUNC_START sub_080AAB50
sub_080AAB50: @ 0x080AAB50
	push {lr}
	ldr r0, _080AAB64  @ =gShield
	ldrb r0, [r0]
	cmp r0, #3
	bne _080AAB70
	ldr r0, _080AAB68  @ =gRam
	ldr r1, _080AAB6C  @ =0x00000964
	add r0, r0, r1
	mov r1, #1
	b _080AAB78
_080AAB64:
	.4byte gShield
_080AAB68:
	.4byte gRam
_080AAB6C:
	.4byte 0x00000964
_080AAB70:
	ldr r0, _080AAB80  @ =gRam
	ldr r1, _080AAB84  @ =0x00000964
	add r0, r0, r1
	mov r1, #0
_080AAB78:
	strh r1, [r0]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AAB80:
	.4byte gRam
_080AAB84:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080AAB50

