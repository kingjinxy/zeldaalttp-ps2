	THUMB_FUNC_START sub_08077D48
sub_08077D48: @ 0x08077D48
	push {r4,r5,lr}
	ldr r1, _08077D80  @ =gUnknown_0814FCC0
	ldr r4, _08077D84  @ =gRam
	ldr r2, _08077D88  @ =0x000009C6
	add r0, r4, r2
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r5, _08077D8C  @ =gUnknown_02028000
	add r1, r5, #0
	bl LZ77UnCompWram
	ldr r1, _08077D90  @ =0x0600E000
	mov r2, #128
	lsl r2, r2, #4
	add r0, r5, #0
	bl CpuFastSet
	ldr r0, _08077D94  @ =0x000009AD
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08077D80:
	.4byte gUnknown_0814FCC0
_08077D84:
	.4byte gRam
_08077D88:
	.4byte 0x000009C6
_08077D8C:
	.4byte gUnknown_02028000
_08077D90:
	.4byte 0x0600E000
_08077D94:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08077D48

