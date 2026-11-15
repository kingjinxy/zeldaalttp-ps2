	THUMB_FUNC_START sub_08117374
sub_08117374: @ 0x08117374
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r6, _081173FC  @ =gRam
	ldr r3, _08117400  @ =0x00000E15
	add r2, r6, r3
	add r2, r1, r2
	mov r3, #0
	mov r8, r3
	mov r3, #19
	strb r3, [r2]
	ldr r3, _08117404  @ =0x00000E33
	add r2, r6, r3
	add r2, r1, r2
	mov r3, #15
	strb r3, [r2]
	ldr r2, _08117408  @ =0x00000DF7
	add r3, r6, r2
	add r3, r1, r3
	ldr r5, _0811740C  @ =gUnknown_0817EF94
	add r2, r2, #70
	add r4, r6, r2
	add r4, r0, r4
	ldrb r2, [r4]
	add r2, r2, r5
	ldrb r2, [r2]
	strb r2, [r3]
	ldr r2, _08117410  @ =0x00000DED
	add r3, r6, r2
	add r3, r1, r3
	ldr r5, _08117414  @ =gUnknown_0817EF90
	ldrb r2, [r4]
	add r2, r2, r5
	ldrb r2, [r2]
	strb r2, [r3]
	ldr r3, _08117418  @ =0x00000DCF
	add r2, r6, r3
	add r3, r1, r2
	add r2, r0, r2
	ldrb r2, [r2]
	strb r2, [r3]
	ldr r3, _0811741C  @ =0x00000DC5
	add r2, r6, r3
	add r3, r1, r2
	add r2, r0, r2
	ldrb r2, [r2]
	strb r2, [r3]
	ldr r3, _08117420  @ =0x00000E47
	add r2, r6, r3
	add r3, r1, r2
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r3]
	ldr r0, _08117424  @ =0x00000E5B
	add r6, r6, r0
	add r1, r1, r6
	mov r2, r8
	strb r2, [r1]
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081173FC:
	.4byte gRam
_08117400:
	.4byte 0x00000E15
_08117404:
	.4byte 0x00000E33
_08117408:
	.4byte 0x00000DF7
_0811740C:
	.4byte gUnknown_0817EF94
_08117410:
	.4byte 0x00000DED
_08117414:
	.4byte gUnknown_0817EF90
_08117418:
	.4byte 0x00000DCF
_0811741C:
	.4byte 0x00000DC5
_08117420:
	.4byte 0x00000E47
_08117424:
	.4byte 0x00000E5B
	THUMB_FUNC_END sub_08117374

