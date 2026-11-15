	THUMB_FUNC_START sub_080EA700
sub_080EA700: @ 0x080EA700
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	ldr r5, _080EA768  @ =gRam
	ldr r1, _080EA76C  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _080EA752
	bl GetRandomInt
	mov r2, #15
	and r2, r2, r0
	ldr r0, _080EA770  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080EA774  @ =gUnknown_08177D54
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080EA778  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080EA77C  @ =gUnknown_08177D64
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	bl GetRandomInt
	mov r1, #31
	and r1, r1, r0
	add r1, r1, #16
	strb r1, [r6]
	ldr r0, _080EA780  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080EA752:
	ldr r1, _080EA784  @ =0x00000F92
	add r0, r5, r1
	add r0, r7, r0
	mov r1, #0
	strb r1, [r0]
	add r0, r7, #0
	bl sub_080C3094
	pop {r4-r7}
	pop {r0}
	bx r0
_080EA768:
	.4byte gRam
_080EA76C:
	.4byte 0x00000FC2
_080EA770:
	.4byte 0x00000F22
_080EA774:
	.4byte gUnknown_08177D54
_080EA778:
	.4byte 0x00000F12
_080EA77C:
	.4byte gUnknown_08177D64
_080EA780:
	.4byte 0x00000F52
_080EA784:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080EA700

