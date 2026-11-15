	THUMB_FUNC_START sub_080C5F10
sub_080C5F10: @ 0x080C5F10
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _080C5F88  @ =gRam
	ldr r5, _080C5F8C  @ =0x00000975
	add r3, r4, r5
	strb r1, [r3]
	mov r3, #151
	lsl r3, r3, #4
	add r1, r4, r3
	strb r2, [r1]
	ldr r5, _080C5F90  @ =0x00000ED2
	add r2, r4, r5
	add r2, r0, r2
	ldrb r3, [r2]
	mov r5, #150
	lsl r5, r5, #4
	add r1, r4, r5
	strb r3, [r1]
	ldr r3, _080C5F94  @ =0x00000958
	add r1, r4, r3
	ldrb r3, [r1]
	ldrb r1, [r2]
	sub r1, r1, r3
	add r5, r5, #12
	add r2, r4, r5
	strb r1, [r2]
	ldr r2, _080C5F98  @ =0x00000EF2
	add r1, r4, r2
	add r1, r0, r1
	ldrb r2, [r1]
	ldr r3, _080C5F9C  @ =0x00000961
	add r1, r4, r3
	strb r2, [r1]
	ldr r5, _080C5FA0  @ =0x00000EE2
	add r2, r4, r5
	add r2, r0, r2
	ldrb r3, [r2]
	ldr r5, _080C5FA4  @ =0x00000964
	add r1, r4, r5
	strb r3, [r1]
	ldr r3, _080C5FA8  @ =0x00000952
	add r1, r4, r3
	ldrb r3, [r1]
	ldrb r1, [r2]
	sub r1, r1, r3
	add r5, r5, #9
	add r2, r4, r5
	strb r1, [r2]
	ldr r2, _080C5FAC  @ =0x00000F02
	add r1, r4, r2
	add r0, r0, r1
	ldrb r0, [r0]
	ldr r3, _080C5FB0  @ =0x00000965
	add r4, r4, r3
	strb r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C5F88:
	.4byte gRam
_080C5F8C:
	.4byte 0x00000975
_080C5F90:
	.4byte 0x00000ED2
_080C5F94:
	.4byte 0x00000958
_080C5F98:
	.4byte 0x00000EF2
_080C5F9C:
	.4byte 0x00000961
_080C5FA0:
	.4byte 0x00000EE2
_080C5FA4:
	.4byte 0x00000964
_080C5FA8:
	.4byte 0x00000952
_080C5FAC:
	.4byte 0x00000F02
_080C5FB0:
	.4byte 0x00000965
	THUMB_FUNC_END sub_080C5F10

