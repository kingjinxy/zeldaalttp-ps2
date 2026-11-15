	THUMB_FUNC_START sub_080776D8
sub_080776D8: @ 0x080776D8
	push {r4,lr}
	ldr r0, _08077714  @ =gRam
	ldr r1, _08077718  @ =0x000009BB
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0807773C
	ldr r0, _0807771C  @ =gUnknown_02019000
	ldr r1, _08077720  @ =0x0600D000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077724  @ =gUnknown_02019800
	ldr r1, _08077728  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _0807772C  @ =gUnknown_02021000
	ldr r1, _08077730  @ =0x0600B000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077734  @ =gUnknown_02021800
	ldr r1, _08077738  @ =0x0600B800
	add r2, r4, #0
	bl CpuFastSet
	b _08077768
_08077714:
	.4byte gRam
_08077718:
	.4byte 0x000009BB
_0807771C:
	.4byte gUnknown_02019000
_08077720:
	.4byte 0x0600D000
_08077724:
	.4byte gUnknown_02019800
_08077728:
	.4byte 0x0600D800
_0807772C:
	.4byte gUnknown_02021000
_08077730:
	.4byte 0x0600B000
_08077734:
	.4byte gUnknown_02021800
_08077738:
	.4byte 0x0600B800
_0807773C:
	ldr r0, _08077770  @ =gUnknown_0201B000
	ldr r1, _08077774  @ =0x0600D000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077778  @ =gUnknown_0201B800
	ldr r1, _0807777C  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077780  @ =gUnknown_02023000
	ldr r1, _08077784  @ =0x0600B000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077788  @ =gUnknown_02023800
	ldr r1, _0807778C  @ =0x0600B800
	add r2, r4, #0
	bl CpuFastSet
_08077768:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08077770:
	.4byte gUnknown_0201B000
_08077774:
	.4byte 0x0600D000
_08077778:
	.4byte gUnknown_0201B800
_0807777C:
	.4byte 0x0600D800
_08077780:
	.4byte gUnknown_02023000
_08077784:
	.4byte 0x0600B000
_08077788:
	.4byte gUnknown_02023800
_0807778C:
	.4byte 0x0600B800
	THUMB_FUNC_END sub_080776D8

