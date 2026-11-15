	THUMB_FUNC_START sub_081092F0
sub_081092F0: @ 0x081092F0
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _081093F8  @ =gRam
	ldr r0, _081093FC  @ =0x000015F9
	add r5, r6, r0
	strb r1, [r5]
	mov r0, #201
	add r1, r4, #0
	mov r2, #8
	bl sub_080C9AAC
	add r7, r0, #0
	cmp r7, #0
	blt _081093EA
	add r0, r4, #0
	mov r1, #37
	bl sub_080CF0AC
	lsl r1, r7, #24
	lsr r1, r1, #24
	mov r8, r1
	mov r0, r8
	bl sub_080CAE50
	ldr r2, _08109400  @ =0x00001092
	add r0, r6, r2
	add r0, r7, r0
	ldrb r1, [r5]
	strb r1, [r0]
	ldr r1, _08109404  @ =0x00001172
	add r0, r6, r1
	add r0, r7, r0
	ldrb r1, [r5]
	strb r1, [r0]
	add r2, r2, #144
	add r0, r6, r2
	add r0, r7, r0
	mov r1, #3
	strb r1, [r0]
	ldr r1, _08109408  @ =0x00001032
	add r0, r6, r1
	add r0, r7, r0
	mov r2, #64
	strb r2, [r0]
	sub r1, r1, #32
	add r0, r6, r1
	add r0, r7, r0
	mov r1, #32
	strb r1, [r0]
	ldr r1, _0810940C  @ =0x00000E75
	add r0, r6, r1
	add r0, r7, r0
	strb r2, [r0]
	ldr r2, _08109410  @ =0x00000964
	add r3, r6, r2
	ldr r1, _08109414  @ =gUnknown_0817C2B8
	ldr r2, _08109418  @ =0x00000FB2
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	add r1, r0, r1
	ldrb r2, [r1]
	ldr r1, _0810941C  @ =gUnknown_0817C2BA
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r2, r2, r0
	ldrh r0, [r3]
	add r2, r2, r0
	strh r2, [r3]
	ldr r1, _08109420  @ =0x00000ED2
	add r5, r6, r1
	add r1, r7, r5
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r2, _08109424  @ =0x00000EF2
	add r2, r2, r6
	mov r9, r2
	add r1, r7, r2
	ldr r2, _08109428  @ =0x00000965
	add r0, r6, r2
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, r8
	mov r1, #32
	bl sub_080C35FC
	ldr r1, _0810942C  @ =0x00000FC2
	add r0, r6, r1
	add r0, r7, r0
	mov r1, #16
	strb r1, [r0]
	ldr r2, _08109430  @ =0x00000F62
	add r0, r6, r2
	add r0, r7, r0
	sub r2, r2, #128
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _08109434  @ =0x00000F72
	add r0, r6, r1
	add r0, r7, r0
	add r2, r2, #32
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _08109438  @ =0x00000F82
	add r0, r6, r1
	add r0, r7, r0
	ldrb r1, [r5]
	strb r1, [r0]
	ldr r2, _0810943C  @ =0x00001062
	add r0, r6, r2
	add r0, r7, r0
	mov r2, r9
	ldrb r1, [r2]
	strb r1, [r0]
	mov r0, r8
	bl sub_0810A820
_081093EA:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_081093F8:
	.4byte gRam
_081093FC:
	.4byte 0x000015F9
_08109400:
	.4byte 0x00001092
_08109404:
	.4byte 0x00001172
_08109408:
	.4byte 0x00001032
_0810940C:
	.4byte 0x00000E75
_08109410:
	.4byte 0x00000964
_08109414:
	.4byte gUnknown_0817C2B8
_08109418:
	.4byte 0x00000FB2
_0810941C:
	.4byte gUnknown_0817C2BA
_08109420:
	.4byte 0x00000ED2
_08109424:
	.4byte 0x00000EF2
_08109428:
	.4byte 0x00000965
_0810942C:
	.4byte 0x00000FC2
_08109430:
	.4byte 0x00000F62
_08109434:
	.4byte 0x00000F72
_08109438:
	.4byte 0x00000F82
_0810943C:
	.4byte 0x00001062
	THUMB_FUNC_END sub_081092F0

