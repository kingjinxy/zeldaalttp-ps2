	THUMB_FUNC_START sub_080FA974
sub_080FA974: @ 0x080FA974
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080FAA38  @ =gRam
	ldr r0, _080FAA3C  @ =0x00000F92
	add r2, r5, r0
	add r2, r4, r2
	ldr r1, _080FAA40  @ =0x00000996
	add r0, r5, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #1
	and r0, r0, r1
	mov r3, #0
	mov r10, r3
	strb r0, [r2]
	ldr r1, _080FAA44  @ =0x00000F52
	add r0, r5, r1
	add r0, r0, r4
	mov r12, r0
	ldrb r7, [r0]
	sub r0, r7, #2
	lsl r0, r0, #24
	lsr r2, r0, #24
	mov r8, r2
	ldr r3, _080FAA48  @ =gUnknown_0817A538
	mov r9, r3
	add r1, r2, r3
	ldr r3, _080FAA4C  @ =0x00000EE2
	add r0, r5, r3
	add r0, r4, r0
	ldrb r3, [r1]
	ldrb r0, [r0]
	sub r0, r3, r0
	add r0, r0, #2
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r6, _080FAA50  @ =gUnknown_0817A532
	cmp r0, #3
	bhi _080FA9E4
	add r0, r2, r6
	ldr r2, _080FAA54  @ =0x00000ED2
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	sub r0, r0, r1
	add r0, r0, #2
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bls _080FAA68
_080FA9E4:
	ldr r1, _080FAA58  @ =0x00000968
	add r0, r5, r1
	strb r3, [r0]
	mov r1, r8
	add r1, r1, #1
	mov r2, r9
	add r0, r1, r2
	ldrb r2, [r0]
	ldr r3, _080FAA5C  @ =0x00000969
	add r0, r5, r3
	strb r2, [r0]
	mov r2, r8
	add r0, r2, r6
	ldrb r2, [r0]
	add r3, r3, #3
	add r0, r5, r3
	strb r2, [r0]
	add r1, r1, r6
	ldrb r1, [r1]
	ldr r2, _080FAA60  @ =0x0000096D
	add r0, r5, r2
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #9
	bl sub_080C2DCC
	ldr r3, _080FAA64  @ =0x00000F12
	add r0, r5, r3
	add r0, r4, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r3, r3, #16
	add r0, r5, r3
	add r0, r4, r0
	add r2, r2, #1
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	b _080FAA92
_080FAA38:
	.4byte gRam
_080FAA3C:
	.4byte 0x00000F92
_080FAA40:
	.4byte 0x00000996
_080FAA44:
	.4byte 0x00000F52
_080FAA48:
	.4byte gUnknown_0817A538
_080FAA4C:
	.4byte 0x00000EE2
_080FAA50:
	.4byte gUnknown_0817A532
_080FAA54:
	.4byte 0x00000ED2
_080FAA58:
	.4byte 0x00000968
_080FAA5C:
	.4byte 0x00000969
_080FAA60:
	.4byte 0x0000096D
_080FAA64:
	.4byte 0x00000F12
_080FAA68:
	add r0, r7, #1
	mov r3, r12
	strb r0, [r3]
	ldr r1, _080FAAA0  @ =0x00000F12
	add r0, r5, r1
	add r0, r4, r0
	mov r2, r10
	strb r2, [r0]
	ldr r3, _080FAAA4  @ =0x00000F22
	add r0, r5, r3
	add r0, r4, r0
	strb r2, [r0]
	add r1, r1, #192
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #13
	bl sub_080CF0AC
_080FAA92:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080FAAA0:
	.4byte 0x00000F12
_080FAAA4:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080FA974

