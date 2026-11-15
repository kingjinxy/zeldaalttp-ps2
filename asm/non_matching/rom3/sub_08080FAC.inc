	THUMB_FUNC_START sub_08080FAC
sub_08080FAC: @ 0x08080FAC
	push {r4-r7,lr}
	ldr r2, _08081018  @ =gRam
	ldr r1, _0808101C  @ =0x00000AD2
	add r0, r2, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r3, _08081020  @ =0x0000199C
	add r1, r2, r3
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r0, _08081024  @ =0x00007FFF
	and r0, r0, r1
	ldr r1, _08081028  @ =0xFFFF0000
	and r6, r6, r1
	orr r6, r6, r0
	mov r0, #126
	add r1, r6, #0
	and r1, r1, r0
	lsl r1, r1, #2
	mov r0, #150
	lsl r0, r0, #4
	add r5, r2, r0
	ldr r3, _0808102C  @ =0x000016C4
	add r0, r2, r3
	ldrh r4, [r0]
	ldr r3, _08081030  @ =0xFFFFFE00
	add r0, r3, #0
	and r0, r0, r4
	orr r1, r1, r0
	strh r1, [r5]
	mov r1, #252
	lsl r1, r1, #5
	add r0, r1, #0
	and r6, r6, r0
	lsr r1, r6, #7
	ldr r0, _08081034  @ =0xFFFFFF00
	and r7, r7, r0
	orr r7, r7, r1
	ldr r0, _08081038  @ =0xFFFF00FF
	and r7, r7, r0
	lsl r0, r7, #3
	ldr r1, _0808103C  @ =0x00000964
	add r4, r2, r1
	mov r1, #182
	lsl r1, r1, #5
	add r2, r2, r1
	ldrh r1, [r2]
	and r3, r3, r1
	orr r0, r0, r3
	strh r0, [r4]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08081018:
	.4byte gRam
_0808101C:
	.4byte 0x00000AD2
_08081020:
	.4byte 0x0000199C
_08081024:
	.4byte 0x00007FFF
_08081028:
	.4byte 0xFFFF0000
_0808102C:
	.4byte 0x000016C4
_08081030:
	.4byte 0xFFFFFE00
_08081034:
	.4byte 0xFFFFFF00
_08081038:
	.4byte 0xFFFF00FF
_0808103C:
	.4byte 0x00000964
	THUMB_FUNC_END sub_08080FAC

