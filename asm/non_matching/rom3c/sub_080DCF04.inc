	THUMB_FUNC_START sub_080DCF04
sub_080DCF04: @ 0x080DCF04
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080DCFF4  @ =gRam
	ldr r1, _080DCFF8  @ =0x00001082
	add r0, r4, r1
	add r0, r5, r0
	mov r6, #0
	strb r6, [r0]
	ldr r2, _080DCFFC  @ =0x00000FB2
	add r0, r4, r2
	add r0, r5, r0
	strb r6, [r0]
	ldr r7, _080DD000  @ =0x00001628
	add r3, r4, r7
	ldrb r0, [r3]
	ldr r1, _080DD004  @ =0x00000D33
	add r1, r1, r4
	mov r8, r1
	add r0, r0, r8
	ldrb r0, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r4
	mov r10, r2
	strb r0, [r2]
	ldrb r0, [r3]
	ldr r7, _080DD008  @ =0x00000D3B
	add r7, r7, r4
	mov r12, r7
	add r0, r0, r12
	ldrb r0, [r0]
	ldr r1, _080DD00C  @ =0x00000961
	add r1, r1, r4
	mov r9, r1
	strb r0, [r1]
	ldr r2, _080DD010  @ =0x00000ED2
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	ldr r7, _080DD014  @ =0x00000964
	add r2, r4, r7
	strb r0, [r2]
	ldr r1, _080DD018  @ =0x00000EF2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r7, r7, #1
	add r0, r4, r7
	strb r1, [r0]
	mov r1, r10
	ldrh r0, [r1]
	ldrh r2, [r2]
	cmp r0, r2
	bcs _080DD034
	ldr r2, _080DD01C  @ =0x00000D23
	add r0, r4, r2
	ldrb r7, [r3]
	add r0, r0, r7
	ldrb r1, [r0]
	ldr r2, _080DD020  @ =0x00000968
	add r0, r4, r2
	strb r1, [r0]
	ldr r7, _080DD024  @ =0x00000D2B
	add r0, r4, r7
	ldrb r1, [r3]
	add r0, r0, r1
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	ldrb r0, [r3]
	add r0, r0, r8
	ldrb r1, [r0]
	ldr r7, _080DD028  @ =0x0000096C
	add r0, r4, r7
	strb r1, [r0]
	ldrb r0, [r3]
	add r0, r0, r12
	ldrb r1, [r0]
	add r2, r2, #4
	add r0, r4, r2
	strb r1, [r0]
	add r0, r5, #0
	mov r1, #8
	bl sub_080C2DCC
	ldr r7, _080DD02C  @ =0x00000F12
	add r0, r4, r7
	add r0, r5, r0
	mov r2, r10
	ldrb r1, [r2]
	strb r1, [r0]
	add r7, r7, #16
	add r0, r4, r7
	add r0, r5, r0
	mov r2, r9
	ldrb r1, [r2]
	strb r1, [r0]
	add r7, r7, #112
	add r2, r4, r7
	add r2, r5, r2
	ldr r1, _080DD030  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	add r0, r5, #0
	eor r0, r0, r1
	lsr r0, r0, #3
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	add r0, r5, #0
	bl sub_080DD3D4
	b _080DD050
	.byte 0x00
	.byte 0x00
_080DCFF4:
	.4byte gRam
_080DCFF8:
	.4byte 0x00001082
_080DCFFC:
	.4byte 0x00000FB2
_080DD000:
	.4byte 0x00001628
_080DD004:
	.4byte 0x00000D33
_080DD008:
	.4byte 0x00000D3B
_080DD00C:
	.4byte 0x00000961
_080DD010:
	.4byte 0x00000ED2
_080DD014:
	.4byte 0x00000964
_080DD018:
	.4byte 0x00000EF2
_080DD01C:
	.4byte 0x00000D23
_080DD020:
	.4byte 0x00000968
_080DD024:
	.4byte 0x00000D2B
_080DD028:
	.4byte 0x0000096C
_080DD02C:
	.4byte 0x00000F12
_080DD030:
	.4byte 0x00000996
_080DD034:
	ldr r2, _080DD060  @ =0x00000F52
	add r1, r4, r2
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r7, _080DD064  @ =0x00000F22
	add r0, r4, r7
	add r0, r5, r0
	strb r6, [r0]
	ldr r1, _080DD068  @ =0x00000F12
	add r0, r4, r1
	add r0, r5, r0
	strb r6, [r0]
_080DD050:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DD060:
	.4byte 0x00000F52
_080DD064:
	.4byte 0x00000F22
_080DD068:
	.4byte 0x00000F12
	THUMB_FUNC_END sub_080DCF04

