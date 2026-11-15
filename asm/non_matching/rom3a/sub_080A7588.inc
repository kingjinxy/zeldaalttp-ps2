	THUMB_FUNC_START sub_080A7588
sub_080A7588: @ 0x080A7588
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r1, _080A75E0  @ =gRam
	ldr r4, _080A75E4  @ =gCurrentHealth
	ldrb r0, [r4]
	mov r2, #150
	lsl r2, r2, #4
	add r7, r1, r2
	strh r0, [r7]
	add r2, r2, #4
	add r2, r2, r1
	mov r8, r2
	strh r0, [r2]
	ldr r2, _080A75E8  @ =0x00000968
	add r5, r1, r2
	strh r0, [r5]
	ldr r0, _080A75EC  @ =gUnknown_0816B7DC
	ldr r6, _080A75F0  @ =gUnknown_0200B1A2
	add r1, r6, #0
	bl sub_080A7830
	ldrb r1, [r4]
	ldr r0, _080A75F4  @ =gMaxHealth
	ldrb r0, [r0]
	add r0, r0, #3
	mov r1, #252
	and r0, r0, r1
	strh r0, [r7]
	strh r0, [r5]
	ldrb r0, [r4]
	mov r1, r8
	strh r0, [r1]
	ldr r0, _080A75F8  @ =gUnknown_0816B7E2
	add r1, r6, #0
	bl sub_080A7830
	bl sub_080A75FC
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080A75E0:
	.4byte gRam
_080A75E4:
	.4byte gCurrentHealth
_080A75E8:
	.4byte 0x00000968
_080A75EC:
	.4byte gUnknown_0816B7DC
_080A75F0:
	.4byte gUnknown_0200B1A2
_080A75F4:
	.4byte gMaxHealth
_080A75F8:
	.4byte gUnknown_0816B7E2
	THUMB_FUNC_END sub_080A7588

