	THUMB_FUNC_START sub_0809DC3C
sub_0809DC3C: @ 0x0809DC3C
	push {lr}
	ldr r2, _0809DC64  @ =gRam
	ldr r1, _0809DC68  @ =0x00001727
	add r0, r2, r1
	ldrb r1, [r0]
	mov r3, #15
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0809DC82
	ldr r1, _0809DC6C  @ =0x00001718
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #17
	beq _0809DC74
	ldr r1, _0809DC70  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	add r0, r3, #0
	b _0809DC7C
_0809DC64:
	.4byte gRam
_0809DC68:
	.4byte 0x00001727
_0809DC6C:
	.4byte 0x00001718
_0809DC70:
	.4byte 0x00000996
_0809DC74:
	ldr r1, _0809DC88  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #7
_0809DC7C:
	and r0, r0, r1
	cmp r0, #0
	beq _0809DC8C
_0809DC82:
	mov r0, #1
	b _0809DC8E
	.byte 0x00
	.byte 0x00
_0809DC88:
	.4byte 0x00000996
_0809DC8C:
	mov r0, #0
_0809DC8E:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0809DC3C

	.byte 0x00
	.byte 0x00
