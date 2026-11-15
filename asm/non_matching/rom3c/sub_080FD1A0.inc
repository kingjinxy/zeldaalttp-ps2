	THUMB_FUNC_START sub_080FD1A0
sub_080FD1A0: @ 0x080FD1A0
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _080FD210  @ =gUnknown_03003E74
	mov r0, #39
	strh r0, [r3]
	mov r1, #0
	ldr r2, _080FD214  @ =gRam
	ldr r5, _080FD218  @ =0x000009DA
	add r0, r2, r5
	ldrh r0, [r0]
	cmp r0, #105
	bne _080FD1BE
	mov r1, #1
_080FD1BE:
	cmp r1, #0
	beq _080FD1D2
	ldr r1, _080FD21C  @ =0x00001022
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #11
	bhi _080FD1D2
	mov r0, #38
	strh r0, [r3]
_080FD1D2:
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080FD208
	add r0, r4, #0
	bl sub_080FCBF0
	add r0, r4, #0
	bl sub_080FC774
	add r0, r4, #0
	bl sub_080FC868
	add r0, r4, #0
	bl sub_080FD220
	add r0, r4, #0
	bl sub_080FCA0C
	add r0, r4, #0
	bl sub_080FCB64
_080FD208:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080FD210:
	.4byte gUnknown_03003E74
_080FD214:
	.4byte gRam
_080FD218:
	.4byte 0x000009DA
_080FD21C:
	.4byte 0x00001022
	THUMB_FUNC_END sub_080FD1A0

